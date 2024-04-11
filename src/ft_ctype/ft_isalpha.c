/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:53:24 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 16:48:35 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is an alphabetic character.
 *
 * This function checks if the specified character @p c is an alphabetic
 * character. An alphabetic character is either an uppercase letter (A-Z) or a
 * lowercase letter (a-z).
 *
 * @param c The character to check.
 * @return 1 if the character is an alphabetic character, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
