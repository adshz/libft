/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_mgr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:05:26 by szhong            #+#    #+#             */
/*   Updated: 2024/01/24 15:55:10 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/**
 * @brief Writes the buffer to stdout and resets it.
 * 
 * Outputs the accumulated characters in the buffer to standard output, 
 * updates the total written character count, and clears the buffer.
 * 
 * @param data Formatting context including the output buffer and counters.
 */
void	flush_buff(t_data *data)
{
	int	bytes_written;

	bytes_written = write(STDOUT_FILENO, data->buff, data->buffer_indx);
	data->written_count += bytes_written;
	ft_memset(data->buff, 0, BUFFER_SIZE);
	data->buffer_indx = 0;
}

/**
 * @brief Adds a character to the buffer and flushes if full.
 * 
 * Stores a character in the output buffer. 
 * Flushes the buffer to stdout if it reaches its capacity.
 * 
 * @param data Formatting context including the buffer and its current index.
 * @param c Character to add to the buffer.
 */
void	write_buff(t_data *data, char c)
{
	if (data->buffer_indx == BUFFER_SIZE)
		flush_buff(data);
	data->buff[data->buffer_indx] = c;
	data->buffer_indx++;
}

/**
 * @brief Writes a character to the buffer multiple times based on precision.
 * 
 * Adds a specified character to the output buffer a given number of times, 
 * respecting the precision parameter.
 * 
 * @param c Character to write.
 * @param precision Number of times to write the character.
 * @param data Formatting context including the buffer.
 */
void	putchar_buff(char c, int precision, t_data *data)
{
	int	count;

	if (precision <= 0)
		return ;
	count = precision;
	while (count > 0)
	{
		write_buff(data, c);
		count--;
	}
}

/**
 * @brief Writes a string to the buffer up to a specified precision.
 * 
 * Adds characters from a string to the output buffer, stopping at either 
 * the end of the string or after a specified number of characters.
 * 
 * @param s String to write.
 * @param precision Maximum number of characters to write.
 * @param data Formatting context including the buffer.
 */
void	putstr_buff(char *s, int precision, t_data *data)
{
	int	count;

	if (precision <= 0 || s == NULL)
		return ;
	count = precision;
	while (count > 0 && *s)
	{
		write_buff(data, *s);
		s++;
		count--;
	}
}
