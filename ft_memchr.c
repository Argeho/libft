/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:50:19 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:06:30 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	size_t	teller;

	teller = 0;
	string = (char *) s;
	while (n > 0)
	{
		if (string[teller] == (char) c)
		{
			return (&string[teller]);
		}
		teller++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	dt[23] = "geinig";
// 	int	s = 'e';

// 	printf("%s\n", memchr(dt, s, 1));
// 	printf("%s", ft_memchr(dt, s, 1));
// }
