/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:34:38 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/15 18:32:14 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->place;
	max_bits = 0;
	while (head)
	{
		if (head->place > max)
			max = head->place;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix(t_stack **stk_a, t_stack **stk_b)
{
	t_radix	radix;

	if (!(*stk_a))
		return ;
	radix.i = 0;
	radix.size = ft_lstsize(*stk_a);
	radix.max_bits = get_max_bits(stk_a);
	while (radix.i < radix.max_bits)
	{
		radix.j = 0;
		while (radix.j++ < radix.size)
		{
			if ((((*stk_a)->place >> radix.i) & 1) == 1)
				ra(stk_a);
			else
				pb(stk_a, stk_b);
		}
		while (ft_lstsize(*stk_b) != 0)
			pa(stk_a, stk_b);
		radix.i++;
	}
}
