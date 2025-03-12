/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:41:16 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/12 20:06:57 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
long int	ft_atoi(const char *nb)
{
	long int	res;
	long int	sign;
	int			i;

	res = 0;
	sign = 1;
	i = 0;
	if (nb[0] == '0' && !nb[1])
		return (0);
	while (nb[i] == 32 || (nb[i] >= 9 && nb[i] <= 13))
		i++;
	if (nb[i] == '-' || nb[i] == '+')
	{
		if (nb[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(nb[i]))
	{
		if (nb[0] == 0)
			i++;
		res += nb[i] - 48;
		if (ft_isdigit(nb[i++ + 1]))
			res *= 10;
	}
	return (sign * res);
}
*/
long int	ft_atoi(const char *nb)
{
	long int	res;
	long int	sign;

	res = 0;
	sign = 1;
	if (*nb == '0' && !(*nb + 1))
		return (0);
	while (*nb == 32 || (*nb >= 9 && *nb <= 13))
		nb++;
	if (*nb == '-' || *nb == '+')
	{
		if (*nb == '-')
			sign *= -1;
		nb++;
	}
	if (*nb == '0')
		nb++;
	while (ft_isdigit(*nb))
	{
/*
		res += *nb - 48;
		if (ft_isdigit(*nb + 1))
			res *= 10;
		nb++;
*/
		res = res * 10 + (*nb - '0');
		nb++;
	}
	return (sign * res);
}
