/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:54:24 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:06:37 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			l;

	l = 0;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	while (l < n)
	{
		if (ss1[l] != ss2[l])
		{
			return (ss1[l] - ss2[l]);
		}
		l++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[15] = "Dayprterday";
// 	char	s2[15] = "Dayafterday";
// 	size_t	k;

// 	k = 10;
// 	printf("%d\n", memcmp(s1, s2, k));
// 	printf("%d", ft_memcmp(s1, s2, k));
// }
