/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:08:58 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:06:43 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ssrc;
	char	*ddst;
	size_t	p;

	p = 0;
	ssrc = (char *) src;
	ddst = (char *) dst;
	if (ssrc == 0 && ddst == 0)
		return (ddst);
	if (ssrc < ddst)
	{
		while (n-- > p)
			ddst[n] = ssrc[n];
	}
	else
	{
		while (n > p)
		{
			ddst[p] = ssrc[p];
			p++;
		}
	}
	return (ddst);
}

// int	main(void)
// {
// 	char	d[50] = "ariba";
// 	char	s[50] = "welkom bij de drie biggetjes";
// 	char	d1[50] = "ariba";
// 	char	s1[50] = "welkom bij de drie biggetjes";
// 	size_t	p;

// 	p = 4;
// 	printf("%s\n", memmove(d1, s1, p));
// 	printf("%s", ft_memmove(d, s, p));
// }
