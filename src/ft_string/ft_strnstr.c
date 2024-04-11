/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:28:56 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:17:32 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Locates the first occurrence of a substring within a limited length.
 *
 * Searches for the first occurrence of the null-terminated substring @p needle
 * in the null-terminated string @p haystack, up to @p n characters.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param n The maximum number of characters to search.
 * @return A pointer to the first occurrence of @p needle in @p haystack,
 *         or NULL if not found within the specified limit.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	i = 0;
	if (*(needle) == '\0')
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && i < n)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && \
				i + j < n && *(haystack + i + j) != '\0')
		{
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
