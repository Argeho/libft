/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:42:34 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/11 14:17:31 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*point;
	t_list	*x;

	point = *lst;
	while (point != NULL)
	{
		x = point;
		point = x->next;
		ft_lstdelone(x, del);
	}
	*lst = NULL;
}
