/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:26:45 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/07 14:26:48 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) || !ft_isblank(str[i]) || str[i] != '+' || str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

int parsing(t_inputs *input, int ac, char **av)
{
	char	*tmp;
	int		i;

	i = 1;
	tmp = NULL;
	while (i < ac)
	{
		tmp = input->raw_str;
		input->raw_str = ft_strjoin(input->raw_str, av[i]);
		free(tmp);
		tmp = input->raw_str;
		input->raw_str = ft_strjoin(input->raw_str, " ");
		free(tmp);
	}
	if (!check_valid_char(input->raw_str))
	{
		free(input->raw_str);
		error();
	}
}