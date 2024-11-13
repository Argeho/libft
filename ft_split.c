/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:50:05 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/11 15:52:42 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_wordcounter(char const *str, char c);
static size_t	ft_wordlength(char const *str, char c);
static size_t	ft_free(char **arr, long x);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	long	x;

	x = 0;
	if (s == 0)
		return (0);
	arr = (char **)malloc(ft_wordcounter(s, c) * sizeof(char *));
	if (!arr)
		return (0);
	while (*s != '\0')
	{
		if (*s != c)
		{
			arr[x] = ft_substr((char *)s, 0, ft_wordlength(s, c));
			if (!(ft_free(arr, x)))
				return (0);
			s = s + ft_wordlength(s, c);
			x++;
		}
		else
			s++;
	}
	arr[x] = 0;
	return (arr);
}

static size_t	ft_wordlength(char const *str, char c)
{
	size_t	charcount;

	charcount = 0;
	while (str[charcount] != c && str[charcount] != '\0')
	{
		charcount++;
	}
	return (charcount);
}

static size_t	ft_free(char **arr, long x)
{
	if (!arr[x])
	{
		while (x >= 0)
		{
			free (arr[x]);
			x--;
		}
		free (arr);
		return (0);
	}
	return (1);
}

static size_t	ft_wordcounter(char const *str, char c)
{
	size_t	loc;
	size_t	counter;

	loc = 0;
	counter = 0;
	while (loc < ft_strlen(str))
	{
		if (str[loc] != c)
		{
			loc = loc + ft_wordlength(&str[loc], c);
			counter++;
		}
		loc++;
	}
	return (counter + 1);
}

// int	main(void)
// {
//  	int i;
//  	char **split;

//  	i = 0;
//  	split = ft_split("xxxxxxxxxxxxhelloxxxx", 'x');
//  	while(split[i] != NULL)
//  	{
//     	printf("[%d]: %s\n", i, split[i]);
//     	i++;
//  	}
//  	return (0);
// }
