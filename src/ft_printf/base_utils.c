/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:54:29 by szhong            #+#    #+#             */
/*   Updated: 2024/01/24 13:43:57 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/**
 * @brief Checks if a character is present in a string.
 * 
 * Iterates through a string to find if the specified character exists within it.
 * 
 * @param s String to search.
 * @param c Character to find.
 * 
 * @return TRUE if character is found, FALSE otherwise.
 */
int	in(const char *s, char c)
{
	if (!s)
		return (FALSE);
	while (*s)
	{
		if (*s == c)
			return (TRUE);
		s++;
	}
	return (FALSE);
}
