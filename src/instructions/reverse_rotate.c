/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:04:25 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 22:39:31 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stk_a)
{
	t_stack	*tmp;
	t_stack	*tail;

	if (!(*stk_a) || !(*stk_a)->next)
		return ;
	tail = ft_lstlast(*stk_a);
	tmp = *stk_a;
	while (tmp->next->next)
		tmp = tmp->next;
	tail->next = *stk_a;
	tmp->next = NULL;
	*stk_a = tail;
}

void	rra(t_stack **stk_a)
{
	reverse_rotate(stk_a);
	ft_printf_fd(1, "rra\n");
}

void	rrb(t_stack **stk_b)
{
	reverse_rotate(stk_b);
	ft_printf_fd(1, "rrb\n");
}
