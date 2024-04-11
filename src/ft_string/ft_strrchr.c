/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:44:54 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 15:31:07 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Finds the last occurrence of a character in a string.
 *
 * @param s The string.
 * @param c The character to find.
 * @return Pointer. last occurrence of @p c in @p s, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (char )c)
		{
			temp = s;
		}
		s++;
	}
	if (*s == (char) c)
	{
		return ((char *)s);
	}
	else
	{
		return ((char *)temp);
	}
}
