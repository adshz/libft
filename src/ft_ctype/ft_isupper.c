/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:15:08 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 16:48:18 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is an uppercase letter.
 *
 * This function determines if the @p c is an uppercase letter.
 * Uppercase letters are characters in the range from 'A' to 'Z' (inclusive)
 * in the ASCII character set. or from 65 to 90 (inclusive)
 *
 * @parm c The character to be checked
 * @return 1 if @p c is an uppercase letter, 0 otherwise
 */
int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
