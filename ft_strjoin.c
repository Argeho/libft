/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:07:41 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:08:26 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		p;

	p = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *) malloc((p + 1) * sizeof(char));
	if (s3 == 0)
		return (0);
	ft_strlcpy(s3, s1, ft_strlen (s1) + 1);
	ft_strlcat(s3, s2, p + 1);
	return (s3);
}

// int	main(void)
// {
// 	char	str1[100] = "abcd";
// 	char	str2[100] = "efghi";

// 	printf("%s", ft_strjoin(str1, str2));
// }
