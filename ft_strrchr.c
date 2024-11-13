/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:00:36 by ahornstr          #+#    #+#             */
/*   Updated: 2022/10/27 13:35:31 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		if (str[count] == (char) c)
		{
			return ((char *)str + count);
		}
		count--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	a;
// 	char	str[] = "helemaal";

// 	a = 'e';
// 	printf("%s\n", ft_strrchr(str, a));
// 	printf("%s", strrchr(str, a));
// }
