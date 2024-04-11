/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:14:08 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 16:59:53 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is a blank character.
 *
 * This function determines if the given character @p c is a blank character.
 * Blank characters are the space character (' ') and 
 * the horizontal tab character Or decimial number 32 and 9 in the ASCII set
 *
 * @param c The character to be checked
 * @return 1 if @p c is a blank character, 0 otherwise
 */
int	ft_isblank(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
