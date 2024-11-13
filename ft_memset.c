/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:29:05 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:06:56 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	char	*string;
	size_t	length;

	length = 0;
	string = (char *) str;
	while (n > 0)
	{
		string[length] = c;
		length++;
		n--;
	}
	return (string);
}

// int	main(void)
// {
// 	char	s[] = "doorgaand";
// 	int		f;
// 	size_t	p;

// 	p = 5;
// 	f = 109;
// 	printf("%s\n", memset(s, f, p));
// 	printf("%s", ft_memset(s, f, p));
// }
