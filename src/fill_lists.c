/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:08:50 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/11 23:27:39 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stacka(char *raw_str, t_stack **stk_a,)
{
	int			i;
	long int	nbr;
	char		*tmpnbr;

	while (*raw_str)
	{
		i = 0;
		while(*raw_str && ft_isblank(*raw_str))
			raw_str++;
		while (raw_str[i] && !ft_isblank(raw_str[i]))
			i++;
		tmpnbr = ft_strndup(raw_str, i);	
		nbr = ft_atoi(tmpnbr);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error();
		free (tmpnbr);
		lst_addback(stk_a, lstnew(nbr, 0));
		raw_str += i;
	}
}
