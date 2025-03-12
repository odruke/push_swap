/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:12:58 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 15:18:12 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	error(char *msg)
{
	ft_printf_fd(2, "%s\n", msg);// eliminar para la version de evaluacion
	ft_printf_fd(2, "Error\n");
	(void)msg;
	exit(errno);
}
