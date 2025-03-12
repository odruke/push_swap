/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:44:09 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 20:51:20 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stk_a)
{

	while(stk_a->next)
	{
		if (stk_a->place > stk_a->next->place)
			return (0);
		stk_a = stk_a->next;
	}
	return (1);
}
