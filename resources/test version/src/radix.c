/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:34:38 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 11:14:45 by odruke-s         ###   ########.fr       */
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
	t_stack	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	if (!(*stk_a))
		return ;
	i = 0;
	head_a = *stk_a;
	size = ft_lstsize(head_a);
	max_bits = get_max_bits(stk_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stk_a;
			if (((head_a->place >> i) & 1) == 1)
				ra(stk_a);
			else
				pb(stk_a, stk_b);
		}
		while (ft_lstsize(*stk_b) != 0)
			pa(stk_a, stk_b);
		i++;
	}	
}
