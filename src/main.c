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

void	init_structs(t_inputs *input)
{
	input->raw_str = ft_strdup("");
}

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
	t_inputs	*input;
	t_stack		*stk_a;
	t_stack		*stk_b;


	input = ft_calloc(1, sizeof(t_inputs));
	stk_a = NULL;
	stk_b = NULL;
	(void)stk_b;//eliminar esta linea para la implementacion de radix
	init_structs(input);
	parsing(input, ac, av);
	fill_stacka(input->raw_str, &stk_a);
	free(input->raw_str);
	if (check_doubles(stk_a))
		error("nbr is repeated");
	bubble(stk_a);
	print_list(stk_a);
}


