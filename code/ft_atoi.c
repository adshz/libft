/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:17:30 by szhong            #+#    #+#             */
/*   Updated: 2023/11/08 23:23:12 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	num_parity;
	int	parity;

	num = 0;
	num_parity = 0;
	parity = 1;
	while ((*str > 8 && *str < 14) || (*str == ' ') || (*str == 32))
		str++;
	while (*str == '-' || *str == '+')
	{
		num_parity++;
		if (*str == '-')
			parity++;
	}
	while (*str > 47 && *str < 58)
	{
		num = num * 10 + (*str - '0');
		num++;
	}
	if (num_parity > 0)
		return (0);
	if (parity > 0)
		return (-num);
	return (num);
}
