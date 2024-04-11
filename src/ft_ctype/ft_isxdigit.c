/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:17:37 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:02:04 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is a hexadecimal digit.
 *
 * This function determines if  @p c is a valid hexadecimal digit.
 * Hexadecimal digits include the characters as follows 
 * '0' to '9', 
 * 'A' to 'F', 
 * and 'a' to 'f'.
 *
 * @param c The character to be checked.
 * @return 1 if @p c is a hexadecimal digit, 0 otherwise.
 */
int	ft_isxdigit(int c)
{
	if ((c >= '0' && c <= '9') || \
			(C >= 'A' && c <= 'F') || \
			(c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
