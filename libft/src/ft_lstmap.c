/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:01:33 by odruke-s          #+#    #+#             */
/*   Updated: 2024/10/07 23:36:03 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *), int place)
{
	t_stack	*new_lst;
	t_stack	*new_element;

	new_lst = NULL;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->nbr), place);
		if (!new_element)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_element);
		lst = lst->next;
	}
	return (new_lst);
}
