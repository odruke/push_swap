/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:00:07 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 22:10:53 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stk_a)
{
	t_stack *tmp;
	if (!stk_a || !*stk_a)
		return ;
	tmp = *stk_a;
	*stk_a = (*stk_a)->next;
	(*stk_a)->next = tmp;
}

void sa(t_stack **stk_a)
{
	swap(stk_a);
	ft_printf_fd(1,"sa\n");
}

void sb(t_stack **stk_b)
{
	swap(stk_b);
	ft_printf_fd(1,"sb\n");
}
