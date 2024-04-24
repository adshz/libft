/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:09:26 by szhong            #+#    #+#             */
/*   Updated: 2024/01/24 16:04:05 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/**
 * @brief Prints a character with formatting.
 * 
 * Handles width and left justification for a single character output.
 * 
 * @param data Formatting context.
 * @param c Character to print.
 */
void	print_char(t_data *data, int c)
{
	int	width;

	width = data->format.width_value;
	if (width > 1)
	{
		if (data->format.left_justified == TRUE)
		{
			putchar_buff((char )c, 1, data);
			putchar_buff(' ', width - 1, data);
		}
		else
		{
			putchar_buff(' ', width - 1, data);
			putchar_buff((char )c, 1, data);
		}
	}
	else
		putchar_buff((char)c, 1, data);
}
