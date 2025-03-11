/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:40:52 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/11 23:28:31 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_structs(t_inputs *input)
{
	input->raw_str = NULL;
}

int	main(int ac, char **av)
{
	t_inputs	*input;
	t_stack		*stk_a;
	t_stack		*stk_b;


	input = ft_calloc(1, sizeof(t_inputs));
	stk_a = NULL;
	stk_b = NULL;
	init_structs(input);
	parsing(input, ac, av);
	fill_stacka(input->raw_str, &stk_a);
}
