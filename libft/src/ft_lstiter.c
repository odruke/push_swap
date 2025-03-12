/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:51:55 by odruke-s          #+#    #+#             */
/*   Updated: 2024/10/08 12:41:27 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstiter(t_stack *lst, void (*f)(int nbr))
{
	t_stack	*tmp;

	tmp = lst;
	if (!tmp)
		return ;
	while (tmp)
	{
		f(tmp->nbr);
		tmp = tmp->next;
	}
}
