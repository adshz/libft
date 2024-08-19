/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:48:07 by szhong            #+#    #+#             */
/*   Updated: 2024/08/19 18:58:12 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stdlib.h"

/**
**@brief Converts a string to a long integer.
**
**This function converts the initial portion of the string pointed to by `str`
**to a long integer representation. It skips leading whitespaces, interprets
**the subsequent characters as a long integer value. It stops when it 
**encounters a non-digit character or the end of the string.
**
**@param str The string to convert.
**@return The converted long integer value.
**
**@note This function behaves similarly to ft_atoi, but returns a long integer
**      instead of an int, allowing for a larger range of values.
**/
long	ft_atol(const char *str)
{
	long	num;
	int		sign;
	int		num_sign;

	num = 0;
	sign = 1;
	num_sign = 0;
	while ((*str > 8 && *str < 14) || (*str == 32))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-' || *str == '+')
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
