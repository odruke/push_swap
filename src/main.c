/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:40:52 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 15:28:23 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *stk_a)
{
	if (!stk_a)
	{
		ft_printf_fd(1, "la lista esta vacia\n");
	}
	while(stk_a)
	{
	ft_printf_fd(1, "nbr= %i\nplace= %i\n------\n", stk_a->nbr, stk_a->place);
		stk_a = stk_a->next;
	}
}

int	main(int ac, char **av)
{
	char		*raw_input;
	t_stack		*stk_a;
	t_stack		*stk_b;


	raw_input = ft_strdup("");
	stk_a = NULL;
	stk_b = NULL;
	(void)stk_b;//eliminar esta linea para la implementacion de radix
	parsing(raw_input, ac, av);
	fill_stacka(raw_input, &stk_a);
	free(raw_input);
	if (check_doubles(stk_a))
		error("nbr is repeated");
	bubble(stk_a);
	if (is_sorted(stk_a))
		ft_printf_fd(1,"the stack is sorted!\n");
	else
		ft_printf_fd(1,"the stack is NOT sorted!\n");
	print_list(stk_a);
}


