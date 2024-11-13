/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:40:10 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 18:51:45 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int		p;
	char	a;

	p = 0;
	a = (char) c;
	while (string[p] != '\0')
	{
		if (string[p] == a)
			return ((char *)string + p);
		p++;
	}
	if (string[p] == a)
		return ((char *)string + p);
	return (0);
}

// int	main(void)
// {
// 	char	a;
// 	char	str[] = "helemaal";

// 	a = 'm';
// 	printf("%s\n", ft_strchr(str, a));
// 	printf("%s", strchr(str, a));
// }
