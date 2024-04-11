/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:17:30 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:39:10 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/**
 * @brief Converts a string to an integer.
 *
 * This function converts the initial portion of the string pointed to by `str`
 * to an integer representation. It skips leading whitespaces and interprets the
 * subsequent characters as an integer value. It stops when it encounters a
 * non-digit character or the end of the string.
 *
 * @param str The string to convert.
 * @return The converted integer value.
 */
int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	num_sign;

	num = 0;
	sign = 1;
	num_sign = 0;
	while ((*str > 8 && *str < 14) || (*str == 32))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
		num_sign++;
	}
	if (num_sign > 1)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
