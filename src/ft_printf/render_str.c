/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:14:03 by szhong            #+#    #+#             */
/*   Updated: 2024/01/23 15:44:14 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	set_str_padding_spaces(t_data *data, char *s);
static void	calculate_padding_spaces(t_data *data, int len);

/**
 * @brief Prints a string with formatting options.
 * 
 * Handles null strings, precision, width, and left justification.
 * 
 * @param data Formatting context.
 * @param s String to print.
 */
void	print_str(t_data *data, char *s)
{
	if (s == NULL)
		s = "(null)";
	set_str_padding_spaces(data, s);
	if (data->format.left_justified)
	{
		if (data->format.precision_value >= 0)
			putstr_buff(s, data->format.precision_value, data);
		else
			putstr_buff(s, ft_strlen(s), data);
		putchar_buff(' ', data->format.padding_spaces, data);
	}
	else
	{
		putchar_buff(' ', data->format.padding_spaces, data);
		if (data->format.precision_value >= 0)
			putstr_buff(s, data->format.precision_value, data);
		else
			putstr_buff(s, ft_strlen(s), data);
	}
}

/**
 * @brief Calculates the number of spaces needed for padding.
 * 
 * Determines padding based on width and precision values 
 * relative to content length.
 * 
 * @param data Formatting context.
 * @param len Length of the content to be padded.
 */
static void	calculate_padding_spaces(t_data *data, int len)
{
	int	temp;
	int	precision_value;

	precision_value = data->format.precision_value;
	if (precision_value >= 0)
	{
		if (precision_value < len)
			temp = data->format.width_value - precision_value;
		else
			temp = data->format.width_value - len;
		data->format.padding_spaces = temp;
	}
	else
		data->format.padding_spaces = data->format.width_value - len;
}

/**
 * @brief Sets padding spaces for string output.
 * 
 * Calculates and assigns the appropriate number of spaces for padding 
 * based on the string's length and format specifications.
 * 
 * @param data Formatting context.
 * @param s String to output.
 */
static void	set_str_padding_spaces(t_data *data, char *s)
{
	int	len;

	len = ft_strlen(s);
	if (data->format.width_value > 0)
		calculate_padding_spaces(data, len);
	else
		data->format.padding_spaces = 0;
}
