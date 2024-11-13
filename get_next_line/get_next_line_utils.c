/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:16:22 by ahornstr          #+#    #+#             */
/*   Updated: 2023/01/25 13:57:51 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_newlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	des_len;
	size_t	src_len;
	size_t	x;
	size_t	i;

	src_len = ft_strlen(src);
	des_len = ft_strlen(dst);
	if (des_len < size)
		x = src_len + des_len;
	else
		x = src_len + size;
	i = 0;
	while (src[i] != '\0' && des_len + i + 1 < size)
	{
		dst[des_len + i] = src[i];
		i++;
	}
	dst[des_len + i] = '\0';
	return (x);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	int		p;
	int		i;
	int		j;

	i = -1;
	j = 0;
	p = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *) malloc((p + 1) * sizeof(char));
	if (!newstr)
		return (free(s1), NULL);
	while (s1[++i])
		newstr[i] = s1[i];
	while (s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	free (s1);
	return (newstr);
}
