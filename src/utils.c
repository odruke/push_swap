/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:44:09 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 11:59:39 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stk_a)
{
	if (!stk_a)
		return (1);
	while(stk_a->next)
	{
		if (stk_a->place > stk_a->next->place)
			return (0);
		stk_a = stk_a->next;
	}
	return (1);
}

void	sort_three(t_stack **stk_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stk_a)->place;
	b = (*stk_a)->next->place;
	c = (*stk_a)->next->next->place;
	if (a < b && b > c)
	{
		ra(stk_a);
		sa(stk_a);
	}
	else if (a > b && b < c)
		sa(stk_a);
	else if (a < b && b > c)
		rra(stk_a);
	else if (a > b && b < c)
		ra(stk_a);
	else 
	{
		sa(stk_a);
		rra(stk_a);
	}
}

void	sort_low(int size, t_stak **stk_a, t_stack **stk_b)
{
	if(size == 1 || !size)
		return ;
	else if (size == 2)
		ra(*stk_a);
	else if (size == 3)
		sort_three(stk_a);
}
