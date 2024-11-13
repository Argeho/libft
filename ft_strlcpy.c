/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:54:40 by ahornstr          #+#    #+#             */
/*   Updated: 2022/10/27 16:40:30 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	d[10] = "AAAAAAAAAA";
// 	char	s[10] = "coucou";
// 	char	d2[10] = "AAAAAAAAAA";
// 	char	s2[10] = "coucou";
// 	size_t	w;

// 	w = -1;
// 	printf("%zu\n", ft_strlcpy(d, s, w));
// 	printf("%zu", strlcpy(d2, s2, w));
// }
