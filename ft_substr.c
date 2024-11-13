/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:09:26 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:09:14 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	loccing(const char *s, size_t newl, size_t l, size_t start);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	p;
	size_t	l;
	size_t	newlen;

	p = 0;
	l = 0;
	newlen = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	newlen = loccing(s, newlen, len, start);
	dest = (char *) malloc(newlen + 1 * sizeof(char));
	if (dest == 0)
		return (0);
	while (s[p] != '\0')
	{
		if (p >= start && l < len)
		{
			dest[l] = s[p];
			l++;
		}
		p++;
	}
	dest[l] = '\0';
	return (dest);
}

static size_t	loccing(const char *s, size_t newl, size_t l, size_t start)
{
	newl = ft_strlen(s) - start;
	if (newl > l)
	{
		newl = l;
	}
	return (newl);
}

// int	main(void)
// {
// 	char	src[10] = "";
// 	int		st;
// 	size_t	l;

// 	st = 1;
// 	l = 1;
// 	printf("%s", ft_substr(src, st, l));
// }
