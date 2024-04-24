/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:55:57 by szhong            #+#    #+#             */
/*   Updated: 2024/01/23 15:08:37 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	put_sign(t_data *data);
static void	put_0x(t_data *data);

/**
 * @brief Prints an integer according to the format specifications.
 * 
 * Converts an integer to a string and applies padding, signs, and justification 
 * as specified in the format. 
 * The function handles both left-justified, right-justified padding.
 * 
 * @param data Pointer to the data structure containing all relevant data.
 * @param int_box Union containing the integer to print, 
 * supporting both signed and unsigned types.
 */
void	print_int(t_data *data, t_union_int int_box)
{
	itoa_buff(data, int_box);
	set_padding_zeros(data);
	set_padding_spaces(data);
	if (data->format.left_justified)
	{
		put_sign(data);
		putchar_buff('0', data->format.padding_zeros, data);
		putstr_buff(data->format.buf_tmp, data->format.nbrlen, data);
		putchar_buff(' ', data->format.padding_spaces, data);
	}
	else
	{
		putchar_buff(' ', data->format.padding_spaces, data);
		put_sign(data);
		putchar_buff('0', data->format.padding_zeros, data);
		putstr_buff(data->format.buf_tmp, data->format.nbrlen, data);
	}
}

/**
 * @brief Converts an integer to a string with a given base.
 * 
 * Recursively divides the integer by its base 
 * to convert it into a string representation, handling negative numbers 
 * and ensuring the base is within valid bounds (2 to 16).
 * The result is stored in the temporary buffer of the format data structure.
 * 
 * @param da Pointer to the data structure containing all relevant data
 * @param int_box Union containing the integer to be converted, 
 * supporting both signed and unsigned types.
 */
void	itoa_buff(t_data *da, t_union_int int_box)
{
	t_union_int	tmp;

	if (da->format.base < 2 || da->format.base > 16)
		return ;
	if (da->format.is_negative && !da->format.is_converted)
	{
		int_box.int64 = -(int_box.int64);
		da->format.is_converted = TRUE;
		itoa_buff(da, int_box);
	}
	else if (int_box.uint64 < da->format.base)
		convert_digit(da, int_box);
	else
	{
		tmp.uint64 = int_box.uint64 / da->format.base;
		itoa_buff(da, tmp);
		tmp.uint64 = int_box.uint64 % da->format.base;
		itoa_buff(da, tmp);
	}
}

/**
 * @brief Converts a digit to a character and stores it.
 * 
 * Uses the specified case for hexadecimal digits.
 * 
 * @param data Pointer to the formatting data structure.
 * @param int_box Union containing the digit to convert.
 */
void	convert_digit(t_data *data, t_union_int int_box)
{
	if (data->format.upper)
		data->format.buf_tmp[data->format.nbrlen++] = UP_HEX[int_box.uint64];
	else
		data->format.buf_tmp[data->format.nbrlen++] = LO_HEX[int_box.uint64];
	return ;
}

/**
 * @brief Adds the appropriate sign or prefix for formatted numbers.
 * 
 * @param data Context with formatting options.
 */
static void	put_sign(t_data *data)
{
	if (data->format.base == BASE_16)
		put_0x(data);
	else if (data->format.signed_value)
	{
		if (data->format.is_negative)
			putchar_buff('-', 1, data);
		else if (FALSE == data->format.is_negative)
		{
			if (data->format.plus)
				putchar_buff('+', 1, data);
			else if (!data->format.plus && data->format.space)
				putchar_buff(' ', 1, data);
		}
	}
}

/**
 * @brief Outputs "0x" or "0X" prefix for hex formats.
 * 
 * Adds the prefix for hex specifiers or pointers, considering case.
 * 
 * @param data Formatting context.
 */
static void	put_0x(t_data *data)
{
	int		is_hash;
	char	spec;

	is_hash = data->format.hash;
	spec = data->format.specifier;
	if ((in("xX", spec) && is_hash && data->format.buf_tmp[0] != '0') || \
			spec == 'p')
	{
		if (data->format.upper)
			putstr_buff("0X", 2, data);
		else
			putstr_buff("0x", 2, data);
	}
}
