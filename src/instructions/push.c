/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:15:01 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/13 22:15:18 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stk_1, t_stack **stk_2)
{
	t_stack *tmp;

	if (!*stk_2)
		return ;
	tmp = (*stk_2)->next;
	(*stk_2)->next = *stk_1;
	*stk_1 = *stk_2;
	*stk_2 = tmp;
	ft_printf_fd(1,"pa\n");
}

void	pb(t_stack **stk_2, t_stack **stk_1)
{
	t_stack *tmp;

	if (!*stk_1)
		return ;
	tmp = (*stk_2)->next;
	(*stk_2)->next = *stk_1;
	*stk_1 = *stk_2;
	*stk_2 = tmp;
	ft_printf_fd(1,"pb\n");
}
