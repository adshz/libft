/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:22:31 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:16:54 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Compares two strings up to a specified length.
 *
 * Compares the null-terminated strings @p s1 and @p s2 up to @p n characters.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if
 *         the first @p n characters of @p s1 are found, respectively,
 *         to be less than, to match, or be greater than the first
 *         @p n characters of @p s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && i < n)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
			return (result);
		}
		i++;
	}
	return (0);
}
