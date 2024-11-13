/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:27:03 by ahornstr          #+#    #+#             */
/*   Updated: 2024/11/13 13:45:56 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		x;
	size_t		i;
	char		*final;

	x = ft_strlen(s1);
	i = 0;
	if (ft_strlen(set) == 0 || x == 0)
		return (ft_strdup(s1));
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (x > i && ft_strchr(set, s1[x]) != 0)
		x--;
	final = ft_substr(s1, i, x - i + 1);
	return (final);
}

// int	main(void)
// {
// 	char	str[100] = "\t\n\t ";
// 	char	setter[100] = " \t\n";

// 	printf("%s", ft_strtrim(str, setter));
// }
