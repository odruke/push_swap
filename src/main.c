/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:40:52 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/06 23:49:18 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_nbr(char c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+' || c == 32)
		return (1);
	else
		return (0);
}

int	is_blank(char c)
{
	if ((c >= 9 && c <= 13) || 32)
		return (1);
	else
		return (0);
}

int	parsing(int ac, char **av)
{
	int	y;
	int	x;
	int	check;

	y = 1;
	while (av[y])
	{
		x = 0;
		check = 0;
		while(av[y][x])
		{
			if (!is_nbr(av[y][x]))
				error();
			if	(is_blank(av[y][x]))
			{
				while (is_blank(av[y][x]))
					x++;
				check++;
			}
			x++;
		}
		noseke	= split(av[y], ' ');
		y++;
	}
	y = 1;
	x = 0;
	while (av[y])
	{
		while(av[y][x])
		y++;
	}

}

int	main(int ac, char **av)
{
	parsing(ac, av);
}
