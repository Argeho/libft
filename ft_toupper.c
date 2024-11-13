/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:21:01 by ahornstr          #+#    #+#             */
/*   Updated: 2022/10/27 13:18:14 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
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

// 	a = '2';
// 	printf("%c", toupper(a));
// 	printf("%c", ft_toupper(a));
// }
