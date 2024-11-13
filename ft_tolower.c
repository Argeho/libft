/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:12:16 by ahornstr          #+#    #+#             */
/*   Updated: 2022/10/27 13:25:54 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	else
	{
		return (c);
	}
	return (c);
}

// int	main(void)
// {
// 	int	a;

// 	a = 'P';
// 	printf("%c", tolower(a));
// 	printf("%c", ft_tolower(a));
// }
