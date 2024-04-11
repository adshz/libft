/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:20:22 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 16:44:53 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is a punctuation character
 *
 * This function determins if @p c is a punctuation character.
 * Puncutation characters are graphical characters that are not alphanumeric 
 * characters or space characters. They include characters such as 
 * puncuation marks, brackets and special symbols.
 *
 * @param c The character to be checked
 * @return 1 if @p c is a punctutaion character, 0 otherwise
 *
 * @note The function considers the following ASCII value ranges as pun
 */
int	ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47) || \
			(c >= 58 && c <= 64) || \
			(c >= 91 && c <= 96) || \
			(c >= 123 && c <= 126))
		return (1);
	return (0);
}
