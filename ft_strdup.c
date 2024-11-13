/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:09:19 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 13:56:20 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		p;
	char	*dupe;

	p = ft_strlen(s1);
	dupe = (char *) malloc(p + 1);
	if (dupe == 0)
		return (0);
	ft_strlcpy(dupe, s1, p + 1);
	return (dupe);
}

// int	main(void)
// {
// 	char	*str = NULL;
// 	char	*dest;

// 	dest = ft_strdup(str);
// 	printf("%s", dest);
// 	dest = strdup(str);
// 	printf("%s", dest);
// }
