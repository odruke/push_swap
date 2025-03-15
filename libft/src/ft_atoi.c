/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odruke-s <odruke-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:41:16 by odruke-s          #+#    #+#             */
/*   Updated: 2025/03/15 15:21:27 by odruke-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	convert(int sign, const char *nb)
{
	long int	res;

	res = 0;
	while (ft_isdigit(*nb))
	{
		if (sign > 0 && res > (LONG_MAX - (*nb - '0')) / 10)
			return (LONG_MAX);
		if (sign < 0 && (unsigned long)res
			> ((unsigned long)(-(LONG_MIN + (*nb - '0')))) / 10)
			return (LONG_MIN);
		res = res * 10 + (*nb - '0');
		nb++;
	}
	return (res * sign);
}

long int	ft_atoi(const char *nb)
{
	long int	sign;

	sign = 1;
	if (*nb == '0' && (*nb + 1) == '\0')
		return (0);
	while (*nb == 32 || (*nb >= 9 && *nb <= 13))
		nb++;
	if (*nb == '-' || *nb == '+')
	{
		if (*nb == '-')
			sign *= -1;
		nb++;
	}
	while (*nb == '0')
		nb++;
	return (convert(sign, nb));
}
