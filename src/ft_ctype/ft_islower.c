/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:12:23 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 16:36:54 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is a lowercase letter.
 *
 * This function determines if the given character @p c is a lowercase letter.
 * Lowercase letters are characters in the range from 'a' to 'z' (inclusive) 
 * in the ASCII character set.
 *
 * @param c The character to be checked.
 * @return 1 if @p c is a lowercase letter, 0 otherwise.
 */
int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
