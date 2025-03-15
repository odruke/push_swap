/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:08:50 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/15 15:33:26 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_limits(long int nbr, char *raw_str, t_stack **stk_a)
{
	if (nbr > INT_MAX || nbr < INT_MIN)
	{
		free_stack(stk_a);
		error(raw_str);
	}
}

void	fill_stacka(char *raw_str, t_stack **stk_a)
{
	int			i;
	int			i_str;
	long int	nbr;
	char		*tmpnbr;

	i = 0;
	nbr = 0;
	while (raw_str[i])
	{
		i_str = 0;
		while (raw_str[i] && ft_isblank(raw_str[i]))
			i++;
		while (raw_str[i + i_str] && !ft_isblank(raw_str[i + i_str]))
			i_str++;
		if (raw_str[i + i_str])
		{
			tmpnbr = ft_strndup(raw_str + i, i_str);
			nbr = ft_atoi(tmpnbr);
			free (tmpnbr);
			check_limits(nbr, raw_str, stk_a);
			ft_lstadd_back(stk_a, ft_lstnew((int)nbr, 0));
			i += i_str;
		}
	}
}
