/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:10:13 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 16:19:02 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_array(t_bubble *bubble, t_stack *stk_a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stk_a;
	bubble->size = ft_lstsize(stk_a);
	bubble->array= ft_calloc(sizeof(int), bubble->size);
	while (tmp)
	{
		bubble->array[i] = tmp->nbr;
		i++;
		tmp = tmp->next;
	}
}

static void	sort_array(t_bubble *bubble)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < bubble->size - 1)
	{
		if (bubble->array[i + 1] < bubble->array[i])
		{
			tmp = bubble->array[i + 1];
			bubble->array[i + 1] = bubble->array[i];
			bubble->array[i] = tmp;
			i = 0;
			
		}
		else
			i++;
	}
}

static void	fill_places(t_bubble *bubble, t_stack *stk_a)
{
	int		i;
	t_stack	*tmp;

	tmp = stk_a;
	while (tmp)
	{
		i = 0;
		while (i <= bubble->size)
		{
			if (tmp->nbr == bubble->array[i])
			{
				tmp->place = i + 1; 
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void bubble(t_stack *stk_a)
{
	t_bubble	*bubble;

	bubble = ft_calloc(sizeof(bubble), 1);
	get_array(bubble, stk_a);
	sort_array(bubble);
	fill_places(bubble, stk_a);
	free(bubble->array);
	free(bubble);
}
