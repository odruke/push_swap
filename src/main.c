/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:40:52 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 22:53:55 by odruke-s         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	char		*raw_input;
	t_stack		*stk_a;
	t_stack		*stk_b;

	raw_input = ft_strdup("");
	stk_a = NULL;
	stk_b = NULL;
	if (av[1][0] == '\0')
		error(raw_input);
	raw_input = parsing(raw_input, ac, av);
	fill_stacka(raw_input, &stk_a);
	free(raw_input);
	if (check_doubles(stk_a))
		error(NULL);
	bubble(stk_a);
	if (is_sorted(stk_a))
		return (0);
	sort(&stk_a, &stk_b);
	free_stack(&stk_a);
}
