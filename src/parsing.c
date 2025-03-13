/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:26:45 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 09:18:10 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && !ft_isblank(str[i]) && str[i] != '+' && str[i] != '-')
			return (0);
		if ((str[i] && str[i + 1]) && (str[i] == '+' || str[i] == '-'))
			if (!ft_isdigit(str[i + 1]))
				return (0);
		if (str[i + 1] && ft_isdigit(str[i]))
			if (str[i + 1] == '+' || str[i + 1] == '-')
				return (0);
		i++;
	}
	return (1);
}
int input_count(char *raw_str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (raw_str[i])
	{
		while (raw_str[i] && ft_isblank(raw_str[i]))	
			i++;
		if (raw_str[i] && !ft_isblank(raw_str[i]))
			count++;
	}
	return (count);
}

void	parsing(char *raw_input, int ac, char **av)
{
	char	*tmp;
	int		i;

	i = 1;
	tmp = NULL;
	if (ac < 2)								//cambiar este check antes de entregar
	{										//
		free(raw_input);						//si no hay argumentos el programa se para sin mostrar mensajes
		error("we need an  argument");		//
	}										//
	while (i < ac)
	{
		tmp = raw_input;
		raw_input = ft_strjoin(raw_input, av[i]);
		free(tmp);
		tmp = raw_input;
		raw_input = ft_strjoin(raw_input, " ");
		free(tmp);
		i++;
	}
	if (!check_valid_char(raw_input))
	{
		if (raw_input)
			free(raw_input);
		error("invalid character");
	}
}

int	check_doubles(t_stack *stk_a)
{
	t_stack *inner;
	t_stack *outer;

	outer = stk_a;
	while (outer)
	{
		inner = outer->next;
		while (inner)
		{
			if (outer->nbr == inner->nbr)
				return (1);
			inner = inner->next;
		}
		outer = outer->next;
	}
	return (0);
}
