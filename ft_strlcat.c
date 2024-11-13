/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:44:24 by ahornstr          #+#    #+#             */
/*   Updated: 2022/10/27 16:02:42 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	x;
	size_t	i;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dl < size)
	{
		x = sl + dl;
	}
	else
	{
		x = sl + size;
	}
	i = 0;
	while (src[i] != '\0' && dl + i + 1 < size)
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (x);
}

// int	main(void)
// {
// 	char	desti[12] = "1234";
// 	const char	source[12] = "567899";
// 	size_t	p;

// 	p = 5;
// 	printf("%lu\n", strlcat(desti, source, p));
// 	printf("%lu", ft_strlcat(desti, source, p));
// }
