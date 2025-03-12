/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:41:45 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 10:48:47 by odruke-s         ###   ########.fr       */
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

typedef struct s_inputs
{
	char *raw_str;
}	t_inputs;

void	error(char *msg);
void     parsing(t_inputs *input, int ac, char **av);
int	    check_doubles(t_stack *stk_a);
void	bubble(t_stack *stk_a);
void	fill_stacka(char *raw_str, t_stack **stk_a);
int		is_sorted(t_stack *stk_a);
void 	sa(t_stack **stk_a);
void 	sb(t_stack **stk_b);


#endif
