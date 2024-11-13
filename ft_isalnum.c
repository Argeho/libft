/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:52:11 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:04:37 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (a <= 57 && a >= 48)
	{
		return (1);
	}
	if (a <= 122 && a >= 97)
	{
		return (1);
	}
	if (a <= 90 && a >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	t;

// 	t = 89;
// 	printf("%d", ft_isalnum(t));
// 	printf("%d", isalnum(t));
// }
