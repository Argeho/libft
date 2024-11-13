/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:46:02 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:02:33 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while ((str[a] >= 9 && str[a] <= 13) || (str[a] == ' '))
	{
		a++;
	}
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			(b *= -1);
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (c * 10) + (str[a] - 48);
		a++;
	}
	return (c * b);
}

// int	main(void)
// {
// 	char	s[232] = "-987";

// 	printf("%d\n", ft_atoi(s));
// 	printf("%d", atoi(s));
// }
