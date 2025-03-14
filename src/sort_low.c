/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:16:50 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 22:50:01 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack **stk_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stk_a)->place;
	b = (*stk_a)->next->place;
	c = (*stk_a)->next->next->place;
	if (a < b && b < c)
		return ;
	if (a < b && b > c && c > a)
	{
		sa(stk_a);
		ra(stk_a);
	}
	else if (a > b && b < c && c > a)
		sa(stk_a);
	else if (a < b && b > c && c < a)
		rra(stk_a);
	else if (a > b && b < c && c < a)
		ra(stk_a);
	else
	{
		sa(stk_a);
		rra(stk_a);
	}
}

static void	sort_four(t_stack **stk_a, t_stack **stk_b)
{
	int	min;

	min = (*stk_a)->place;
	if (is_sorted(*stk_a))
		return ;
	if (min_pos(&min, *stk_a) > 2)
		while ((*stk_a)->place != min)
			rra(stk_a);
	else
		while ((*stk_a)->place != min)
			ra(stk_a);
	if (is_sorted(*stk_a))
		return ;
	pb(stk_a, stk_b);
	sort_three(stk_a);
	pa(stk_a, stk_b);
}

static void	sort_five(t_stack **stk_a, t_stack **stk_b)
{
	int	min;

	min = (*stk_a)->place;
	if (is_sorted(*stk_a))
		return ;
	if (min_pos(&min, *stk_a) > 2)
		while ((*stk_a)->place != min)
			rra(stk_a);
	else
		while ((*stk_a)->place != min)
			ra(stk_a);
	if (is_sorted(*stk_a))
		return ;
	pb(stk_a, stk_b);
	sort_four(stk_a, stk_b);
	pa(stk_a, stk_b);
}

void	sort_low(int size, t_stack **stk_a, t_stack **stk_b)
{
	if (size == 1 || !size)
		return ;
	else if (size == 2)
		ra(stk_a);
	else if (size == 3)
		sort_three(stk_a);
	else if (size == 4)
		sort_four(stk_a, stk_b);
	else if (size == 5)
		sort_five(stk_a, stk_b);
}
