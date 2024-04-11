/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:19:18 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 16:34:54 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is a control character.
 *
 * This function determines if the given character @p c is a control character.
 * Control characters are non-printable characters that are used to control the
 * formatting or behavior of text, such as newline, tab, or backspace.
 *
 * @param c The character to be checked.
 * @return 1 if @p c is a control character, 0 otherwise.
 *
 * @note The function considers the following characters as control characters:
 *       - ASCII values 0 to 31 (inclusive)
 *       - ASCII value 127 (DEL)
 */

int	ft_iscntrl(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (1);
	return (0);
}
