/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:12:57 by szhong            #+#    #+#             */
/*   Updated: 2024/07/22 16:13:58 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stdlib.h"
#include "libft.h"

int	error_check(char *base)
{
	int	next;
	int	i;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		next = 1;
		if (!ft_isprint(base[i]))
			return (0);
		while (base[i + next])
		{
			if (base[i + next] == base[i])
				return (0);
			next++;
		}
		i++;
	}
	return (1);
}

int	base_convert(char *str, char *base)
{
	size_t		remainder_base_idx;
	size_t		base_len;
	int			i;
	int			num;

	i = 0;
	num = 0;
	base_len = ft_strlen(base);
	while (str[i] && ft_strchr(base, ft_tolower(str[i])))
	{
		remainder_base_idx = 0;
		while (ft_tolower(str[i]) != base[remainder_base_idx] && \
				base[remainder_base_idx])
			remainder_base_idx++;
		num = num * base_len + remainder_base_idx;
		i++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	size_t		i;
	int			sign;
	int			num;

	if (!error_check(base))
		return (0);
	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] == '0')
	{
		i++;
		if (str[i] == 'x')
			i++;
	}
	num = base_convert(str + i, base);
	return (num * sign);
}
