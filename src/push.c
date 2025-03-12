/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:15:01 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 23:36:44 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stk_a, t_stack **stk_b)
{
	t_stack *tmp;

	if (!*stk_b)
		return ;

	ft_printf_fd(1,"pa\n");
}

void	pb(t_stack **stk_b)
{
	push(stk_b);
	ft_printf_fd(1,"pb\n");
}
