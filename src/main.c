/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:40:52 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/15 18:56:23 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_stack **stk_a, t_stack **stk_b)
{
	int	size;

	size = ft_lstsize(*stk_a);
	if (size < 6)
		sort_low(size, stk_a, stk_b);
	else
		radix(stk_a, stk_b);
}

static void	ft_exit(char *raw_input, t_stack **stack)
{
	if (raw_input)
		free(raw_input);
	if (*stack)
		free_stack(stack);
	exit(0);
}

int	main(int ac, char **av)
{
	char		*raw_input;
	t_stack		*stk_a;
	t_stack		*stk_b;

	raw_input = ft_strdup("");
	stk_a = NULL;
	stk_b = NULL;
	if (!av[1])
		ft_exit(raw_input, &stk_a);
	raw_input = parsing(raw_input, ac, av);
	fill_stacka(raw_input, &stk_a);
	free(raw_input);
	if (check_doubles(stk_a))
	{
		free_stack(&stk_a);
		error(NULL);
	}
	bubble(stk_a);
	if (is_sorted(stk_a))
		ft_exit(NULL, &stk_a);
	sort(&stk_a, &stk_b);
	free_stack(&stk_a);
	free_stack(&stk_b);
}
