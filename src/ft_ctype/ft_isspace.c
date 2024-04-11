/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:16:18 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:01:18 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is a white-space character.
 *
 * This function determines if @p c is a white-space character.
 * White-space characters are characters that represent horizontal or 
 * vertical space in typography. 
 * They include the space character (' '), newline ('\n'),
 * horizontal tab ('\t'), vertical tab ('\v'), form feed ('\f'), 
 * and carriage return ('\r').
 *
 * @param c The character to be checked.
 * @return 1 if @p c is a white-space character, 0 otherwise.
 *
 * @note The function considers white-space characters as follows:
 *       - Space (' ')
 *       - Newline ('\n')
 *       - Horizontal tab ('\t')
 *       - Vertical tab ('\v')
 *       - Form feed ('\f')
 *       - Carriage return ('\r')
 */
int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || \
			c == '\r')
		return (1);
	return (0);
}
