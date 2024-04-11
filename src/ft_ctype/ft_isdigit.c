/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:56:47 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 16:51:28 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ctype.h"

/**
 * @brief Checks if a character is a decimal digit.
 *
 * This function checks if the specified character @p c is a decimal digit
 * (0-9).
 *
 * @param c The character to check.
 * @return 1 if the character is a decimal digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
