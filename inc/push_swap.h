/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:41:45 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 23:59:46 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include "libft.h"
# include <fcntl.h>
# include <errno.h>

typedef struct s_bubble
{
	int		size;
	int		*array;
}	t_bubble;

typedef struct s_radix
{
	int		i;
	int		j;
	int		size;
	int		max_bits;
}	t_radix;

void	error(char *raw_input);
char	*parsing(char *raw_input, int ac, char **av);
int		check_doubles(t_stack *stk_a);
void	bubble(t_stack *stk_a);
void	fill_stacka(char *raw_str, t_stack **stk_a);
int		is_sorted(t_stack *stk_a);
void	sa(t_stack **stk_a);
void	sb(t_stack **stk_b);
void	pa(t_stack **stk_1, t_stack **stk_2);
void	pb(t_stack **stk_2, t_stack **stk_1);
void	ra(t_stack **stk_a);
void	rb(t_stack **stk_b);
void	rra(t_stack **stk_a);
void	rrb(t_stack **stk_b);
void	radix(t_stack **stk_a, t_stack **stk_b);
void	sort_low(int size, t_stack **stk_a, t_stack **stk_b);
int		min_pos(int *min, t_stack *stk_a);
void	free_stack(t_stack **stack);

#endif
