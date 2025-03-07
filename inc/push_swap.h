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

typedef struct s_node
{
    int             value;
	struct s_node  *prev;
    struct s_node  *next;
}   t_node;

typedef struct s_inputs
{
	char *raw_str;
}	t_inputs;

void	error(void);

#endif