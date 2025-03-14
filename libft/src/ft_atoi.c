/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:41:16 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/14 22:19:38 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		res = res * 10 + (*nb - '0');
		nb++;
	}
	return (sign * res);
}
