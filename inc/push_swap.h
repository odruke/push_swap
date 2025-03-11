/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:41:45 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/07 11:54:43 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include "libft.h"
# include <fcntl.h>
# include <errno.h>

typedef struct s_stack
{
    int     nbr;
    int     place;
    struct  s_stack  *next;
}   t_stack;

typedef struct s_inputs
{
	char *raw_str;
}	t_inputs;

void	error(void);
int     parsing(t_inputs *input, int ac, char **av);

#endif