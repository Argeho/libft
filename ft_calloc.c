/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:53:08 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/08 16:04:22 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > (unsigned long)16711568)
		return (0);
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (0);
	}
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

// int	main(void)
// {
// 	size_t	a;
// 	size_t	b;

// 	a = 4;
// 	b = sizeof(int);
// }
