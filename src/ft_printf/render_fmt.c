/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_fmt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:58:13 by szhong            #+#    #+#             */
/*   Updated: 2024/02/12 14:57:22 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/**
 * @brief Renders formatted output based on the parsed format specifier.
 * 
 * Handles the output of different types of format specifiers, 
 * including characters, strings, and various integer types. 
 * For integer specifiers, it processes and prints the integer
 * according to the specified format options.
 * 
 * @param data Pointer to the data structure containing all necessary information
 * for rendering, including the format specifier and the argument list.
 */
void	render_fmt(t_data *data)
{
	t_union_int	int_box;
	char		spec;

	spec = data->format.specifier;
	if (spec == '%')
		print_char(data, '%');
	else if (spec == 'c')
		print_char(data, va_arg(data->ap, int));
	else if (spec == 's')
		print_str(data, va_arg(data->ap, char *));
	int_box.int64 = 0;
	if (in("dipxXub", spec))
	{
		handle_int_spec(data, spec, &int_box);
		if (int_box.uint64 == 0 && spec == 'p')
			putstr_buff("(nil)", 6, data);
		else
			print_int(data, int_box);
	}
}

/**
 * @brief Processes integer specifiers and retrieves the corresponding value.
 * 
 * Depending on the specifier, retrieves either a signed or unsigned integer 
 * from the variadic arguments and stores it in the provided union. 
 * Adjusts format flags for signed values and negative numbers as necessary.
 * 
 * @param data Pointer to the data structure containing all relevant data.
 * @param spec The current integer format specifier being processed.
 * @param ptr_intbox Pointer to a union to store the retrieved integer value.
 */
void	handle_int_spec(t_data *data, char spec, t_union_int *ptr_intbox)
{
	if (in("di", spec))
	{
		ptr_intbox->int64 = (long)va_arg(data->ap, int);
		data->format.signed_value = TRUE;
		if (ptr_intbox->int64 < 0)
			data->format.is_negative = TRUE;
	}
	else if (spec == 'p')
		ptr_intbox->uint64 = (unsigned long)va_arg(data->ap, void *);
	else if (in("xXub", spec))
		ptr_intbox->uint64 = (unsigned long)va_arg(data->ap, unsigned int);
	return ;
}
