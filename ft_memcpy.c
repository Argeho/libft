/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:02:20 by ahornstr          #+#    #+#             */
/*   Updated: 2022/10/27 18:24:24 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*naar;
	char	*van;
	size_t	p;

	p = 0;
	van = (char *)src;
	naar = (char *)dst;
	if (dst == 0 && src == 0)
	{
		return (naar);
	}
	while (n > p)
	{
		naar[p] = van[p];
		p++;
	}
	return (naar);
}

// int	main(void)
// {
// 	char			dt[0] = "";
// 	const	char	sr[0] = "";
// 	size_t			p = 3;

// 	printf("%s\n", memcpy(dt, sr, p));
// 	printf("%s", ft_memcpy(dt, sr, p));
// }
