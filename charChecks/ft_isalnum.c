/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:46:16 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:47:09 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Checks if a character is alphanumeric
 *
 * This function checks if the specified character @p c is alphanumeric.
 * A character is considered alphanumeric if it is an uppercase letter, a
 * lowercase letter, or a digit (0-9).
 *
 * @param c The character to check.
 * @return 1 if the character is alphanumeric, 0 otherwise
 */
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
