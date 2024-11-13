/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:53:33 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:08:52 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	a;

	a = 0;
	while (a < n && (s1[a] != '\0' || s2[a] != '\0'))
	{
		if (s1[a] > s2[a] || s2[a] > s1[a])
		{
			return ((unsigned char) s1[a] - (unsigned char ) s2[a]);
		}
		a++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	p;
// 	int	t;

// 	char	str1[23] = "gHgg";
// 	char	str2[23] = "ggg";

// 	p = 2;
// 	printf("%d\n", ft_strncmp(str1, str2, p));
// 	t = strncmp(str1, str2, p);
// 	printf("%d", t);
// }