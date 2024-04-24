/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:02:46 by szhong            #+#    #+#             */
/*   Updated: 2024/01/31 18:45:24 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/**
 * @brief Initializes the data structure for formatting operations.
 * 
 * Sets up the initial state, including allocating a buffer for output. 
 * Validates the format string and prepares for parsing and rendering.
 * 
 * @param data Pointer to the data structure to be initialized.
 * @param fmt The format string to be used for output formatting.
 * 
 * @return SUCCESS if initialization is successful, FORMAT_STRING_EMPTY if 
 * the format string is empty, or MALLOC_FAIL if memory allocation 
 * for the buffer fails.
 */
int	data_init(t_data *data, const char *fmt)
{
	char	*buffer;

	if (!fmt || *fmt == '\0')
		return (FORMAT_STRING_EMPTY);
	data->s = fmt;
	data->written_count = 0;
	buffer = (char *)ft_calloc(BUFFER_SIZE, sizeof(char));
	if (buffer == NULL)
		return (MALLOC_FAIL);
	data->buff = buffer;
	data->buffer_indx = 0;
	return (SUCCESS);
}

/**
 * @brief Custom printf function implementation.
 * 
 * This function mimics the standard printf function,
 * allowing for formatted output to stdout.
 * It supports a subset of the format specifiers and flags of the printf. 
 * The function initializes a data structure to hold 
 * the format string and variadic arguments, parses the format
 * string, and renders the formatted output accordingly. 
 * It handles errors in initialization, 
 * and parsing by returning specific error codes.
 * 
 * @param fmt The format string containing the text to be written to stdout, 
 * including format specifiers,
 * which are replaced by the values specified in subsequent extra arguments, 
 * and formatted as requested.
 * @param ... Variadic arguments representing the data to be formatted,
 * and printed according to the format specifiers in the fmt string.
 * 
 * @return Returns the number of characters printed (excluding the null byte
 * used to end output to strings)
 * on success. Returns INITIALIZATION_ERROR if there is an error 
 * during initialization of the data structure,
 * or PARSE_ERROR if there is an error parsing the format string.
 */
int	ft_printf(const char *fmt, ...)
{
	t_data	data;

	if (data_init(&data, fmt) != SUCCESS)
		return (INITIALIZATION_ERROR);
	va_start(data.ap, fmt);
	while (*data.s)
	{
		if (*data.s == '%' && *++data.s)
		{
			if (parse_fmt(&data) != SUCCESS)
				return (PARSE_ERROR);
			render_fmt(&data);
		}
		else
			write_buff(&data, *data.s);
		++data.s;
	}
	flush_buff(&data);
	va_end(data.ap);
	free(data.buff);
	return (data.written_count);
}
