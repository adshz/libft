/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:54:29 by szhong            #+#    #+#             */
/*   Updated: 2024/01/24 13:43:57 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/**
 * @brief Calculates and adjusts zero padding based on formatting options.
 * 
 * Applies precision and width calculations for zero padding, 
 * adjusting for special cases and ensuring non-negative padding.
 * 
 * @param data Formatting context.
 */
void	set_padding_zeros(t_data *data)
{
	cal_precision_padding(data);
	if (data->format.zero_pads)
	{
		if (data->format.left_justified)
			return ;
		cal_width_padding(data);
		adj_zero_special(data);
	}
	if (data->format.padding_zeros < 0)
		data->format.padding_zeros = 0;
}

/**
 * @brief Calculates zero padding based on precision and content length.
 * 
 * Sets padding zeros to the difference between precision and content length
 * if precision is specified and greater than length.
 * 
 * @param data Formatting context.
 */
void	cal_precision_padding(t_data *data)
{
	int	precision;
	int	len;

	precision = data->format.precision_value;
	len = data->format.nbrlen;
	if (precision >= 0)
	{
		if (precision > len)
		{
			data->format.padding_zeros = precision - len;
			return ;
		}
	}
}

/**
 * @brief Calculates zero padding based on width and content length.
 * 
 * Adjusts padding zeros to fill the width specified if greater 
 * than the content length.
 * 
 * @param data Formatting context.
 */
void	cal_width_padding(t_data *data)
{
	int	width;
	int	len;

	width = data->format.width_value;
	len = data->format.nbrlen;
	if (width > len)
		data->format.padding_zeros = width - len;
	return ;
}

/**
 * @brief Adjusts zero padding for negative numbers, signs, and hex cases.
 * 
 * Reduces padding zeros for signed values, hex prefixes, and pointers, 
 * ensuring proper formatting alignment.
 * 
 * @param data Formatting context.
 */
void	adj_zero_special(t_data *data)
{
	int	is_neg;
	int	is_plus;
	int	is_space;

	is_neg = data->format.is_negative;
	is_plus = data->format.plus;
	is_space = data->format.space;
	if (data->format.specifier == 'u')
		return ;
	else if ((in("xX", data->format.specifier) && \
				data->format.hash && \
				data->format.buf_tmp[0] != '0') || \
				data->format.specifier == 'p')
		data->format.padding_zeros -= 2;
	else if (is_neg || (!is_neg && (is_plus || is_space)))
		data->format.padding_zeros--;
	return ;
}
