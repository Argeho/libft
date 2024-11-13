/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahornstr <ahornstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:03:09 by ahornstr          #+#    #+#             */
/*   Updated: 2022/11/15 14:41:02 by ahornstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*exer;
	t_list	*poser;
	t_list	*imposer;

	exer = 0;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		imposer = f(lst->content);
		poser = ft_lstnew(imposer);
		if (poser == NULL)
		{
			del(imposer);
			ft_lstclear(&exer, del);
			return (NULL);
		}
		ft_lstadd_back(&exer, poser);
		lst = lst->next;
	}
	return (exer);
}
