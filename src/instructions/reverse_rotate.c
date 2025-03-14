/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:04:25 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 12:14:50 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void reverse_rotate(t_stack **stk_a)
{
	t_stack *head;
	t_stack *tail;

	if (!(*stk_a) || !(*stk_a)->next)
		return ;
	tail = lstlast(*stk_a);
	head = *stk_a;
	while ((*stk_a)->next->next)
		*stk_a = (*stk_a)->next;
	*stk_a = NULL;
	tail->next = head->next;
	head = tail;
}
