/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:44:09 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/15 00:00:03 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stk_a)
{
	if (!stk_a)
		return (1);
	while (stk_a->next)
	{
		if (stk_a->place > stk_a->next->place)
			return (0);
		stk_a = stk_a->next;
	}
	return (1);
}

int	min_pos(int *min, t_stack *stk_a)
{
	int		i;
	int		pos;
	t_stack	*tmp;

	i = 1;
	pos = 1;
	tmp = stk_a;
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
		if (*min > tmp->place)
		{
			*min = tmp->place;
			pos = i;
		}
	}
	return (pos);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}
