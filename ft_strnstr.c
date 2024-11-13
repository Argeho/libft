/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:00:16 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 13:05:49 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	p;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		p = 0;
		while (needle[p] == haystack[p + i] && needle[p] != '\0')
		{
			p++;
			if (needle[p] == '\0' && (p + i) <= len && ft_strlen(needle) <= len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	h[344] = "lorem ipsum dolor sit lorem ipsum dolor";
// 	char	n[344] = "ipsumm";
// 	size_t	s;

// 	s = 30;
// 	printf("%s\n", strnstr(h, n, s));
// 	printf("%s", ft_strnstr(h, n, s));
// }
