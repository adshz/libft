/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:28:43 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:27:49 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * Finds the first occurrence of the character @p c in the string @p s.
 *
 * @param s The string to search.
 * @param c The character to locate.
 * @return A pointer to the first occurrence of the character,
 * 	   or NULL if not found.
 */
char	*ft_strchr(char const *s, int c)
{
	while (*s != '\0' && *s != (char ) c)
		s++;
	if (*s == (char )c)
		return ((char *)s);
	return (0);
}
