/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:34 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:05:10 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizen(int n);
static	void	ft_modulo(char *ptr, size_t loc, int n);

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	loc;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = (char *) malloc(sizen(n) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);
	loc = sizen(n);
	ptr[loc--] = '\0';
	if (n < 0)
	{
		n = -n;
		ptr[0] = '-';
	}
	ft_modulo(ptr, loc, n);
	return (ptr);
}

static	void	ft_modulo(char *ptr, size_t loc, int n)
{
	while (n > 0)
	{
		if (n > 9)
		{
			ptr[loc] = n % 10 + '0';
			n /= 10;
			loc--;
		}
		if (n < 10)
		{
			ptr[loc] = (n + '0');
			loc--;
			n = 0;
		}
	}
}

static	int	sizen(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

// int	main(void)
// {
// 	int	g;

// 	g = 1998;
// 	printf("%s", ft_itoa(g));
// }
