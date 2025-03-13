/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:19:17 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/13 23:16:21 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stk)
{
	t_stack *tmp;

	tmp = *stk;
	if(!(*stk) || !(*stk)->next)
		return ;
	*stk = tmp->next;
	tmp->next = NULL;
	ft_lstlast(*stk)->next = tmp;;
}

void	ra(t_stack **stk_a)
{
	reverse_rotate(stk_a);
	ft_printf_fd(1,"ra\n");
}

void	rb(t_stack **stk_b)
{
	reverse_rotate(stk_b);
	ft_printf_fd(1,"rb\n");
}

void	rr(t_stack **stk_b, t_stack **stk_a)
{
	reverse_rotate(stk_b);
	reverse_rotate(stk_a);
	ft_printf_fd(1,"rr\n");
}
