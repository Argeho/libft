/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:03:10 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:02:51 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *) s;
	i = 0;
	while (n > 0)
	{
		string[i] = '\0';
		i++;
		n--;
	}
}

// int	main(void)
// {
// 	char	dt[23] = "errererer";
// 	size_t	p = 2;

// 	printf("%s\n", bzero(dt, p));
// 	printf("%s", ft_bzero(dt, p));
// }
