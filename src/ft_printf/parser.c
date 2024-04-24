/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:26:01 by szhong            #+#    #+#             */
/*   Updated: 2024/02/12 14:09:46 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	printf_atoi(t_data *data);
static int	get_nbrlen(char *nbstr);
static void	get_value(t_data *data, int *value);
static void	parse_flags(t_data *data);
int			parse_fmt(t_data *data);

/**
 * @brief Parses formatting flags from the format string.
 * 
 * Identifies and sets flags for formatting options 
 * (left justification, padding, sign, etc.)
 * based on the current position in the format string. 
 * Updates the format structure accordingly.
 * 
 * @param data Pointer to the data structure containing the format string 
 * and current parsing state.
 */
static void	parse_flags(t_data *data)
{
	char		flag;
	t_format	*fmt;

	fmt = &data->format;
	while (in(FLAGS, *data->s))
	{
		flag = *data->s;
		if (flag == '-')
			fmt->left_justified = TRUE;
		else if (flag == '#')
			fmt->hash = TRUE;
		else if (flag == ' ')
			fmt->space = TRUE;
		else if (flag == '+')
			fmt->plus = TRUE;
		else if (flag == '0' && fmt->left_justified == 0)
			data->format.zero_pads = TRUE;
		data->s++;
	}
	return ;
}

/**
 * @brief Calculates the length of a number string.
 * 
 * Counts the number of digit characters in a string starting 
 * from the given pointer until a non-digit character is encountered.
 * 
 * @param nbstr Pointer to the start of the number string.
 * 
 * @return The length of the number string in characters.
 */
static int	get_nbrlen(char *nbstr)
{
	int	nbrlen;

	nbrlen = 0;
	while (in(NUMBERS, *nbstr))
	{
		nbstr++;
		nbrlen++;
	}
	return (nbrlen);
}

/**
 * @brief Retrieves a value for width or precision.
 * 
 * Determines and sets the value for a formatting parameter (width or precision) 
 * either by parsing the format string directly 
 * or by retrieving the next variadic argument if the
 * format specifies a '*'. Advances the format string pointer accordingly.
 * 
 * @param data Pointer to the data structure containing the format string 
 * and current parsing state.
 * @param value Pointer to an integer where the retrieved value will be stored.
 */
static void	get_value(t_data *data, int *value)
{
	int		nbrlen;

	nbrlen = 0;
	if (*data->s == '*')
	{
		*value = va_arg(data->ap, int);
		++data->s;
		return ;
	}
	nbrlen = get_nbrlen((char *)data->s);
	if (nbrlen < 2)
	{
		*value = ft_atoi(data->s);
		if (*value != 0)
			data->s++;
		return ;
	}
	else
	{
		*value = printf_atoi(data);
		return ;
	}
}

/**
 * @brief Converts a sequence of digits in the format string to an integer.
 * 
 * Parses characters in the format string representing digits, 
 * and converts them to an integer value.
 * Advances the format string pointer past the parsed digits.
 * 
 * @param data Pointer to the data structure containing the current position 
 * in the format string.
 * 
 * @return The integer value of the parsed digit sequence.
 */
static int	printf_atoi(t_data *data)
{
	int	value;

	value = 0;
	while (in(NUMBERS, *data->s))
	{
		value = (value * 10) + (*data->s - '0');
		data->s++;
	}
	return (value);
}

/**
 * @brief Parses format specifiers from the format string.
 * 
 * Initializes and sets format details in the data structure 
 * based on the current position in the format string. 
 * Handles flags, width, precision, and specifier parsing. 
 * Sets the numerical base for integer conversions based on the specifier.
 * 
 * @param data Pointer to the data structure 
 * containing the format string and parsing state.
 * 
 * @return SUCCESS if parsing is successful, 
 * PARSE_ERROR if an invalid specifier is encountered.
 */
int	parse_fmt(t_data *data)
{
	ft_memset(&data->format, 0, sizeof(t_format));
	data->format.precision_value = -1;
	parse_flags(data);
	get_value(data, &data->format.width_value);
	if (*data->s == '.' && *(++data->s))
		get_value(data, &data->format.precision_value);
	if (!in(SPECIFIERS, *data->s))
		return (PARSE_ERROR);
	else
	{
		data->format.specifier = *data->s;
		if (in("diu", data->format.specifier))
			data->format.base = BASE_10;
		else if (in("xXp", data->format.specifier))
		{
			data->format.base = BASE_16;
			if ('X' == data->format.specifier)
				data->format.upper = TRUE;
		}
		else if ('b' == data->format.specifier)
			data->format.base = BASE_2;
	}
	return (SUCCESS);
}
