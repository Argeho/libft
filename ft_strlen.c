/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:03:58 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/24 17:18:12 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	hm;

	hm = 0;
	while (str[hm] != '\0')
		hm++;
	return (hm);
}

// int	main(void)
// {
// 	int	hm;
// 	char	str[15] = "codamilicious";

// 	hm = ft_strlen(str);
// 	printf("%d", hm);
// 	return (0);
// }
