/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:33:01 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:12:18 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Concatenates two strings.
 *
 * Concatenates the strings @p s1 and @p s2 into a new string.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A pointer to the concatenated string, or NULL on failure.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*str;
	char	*ptr_str;

	total_size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	str = (char *)malloc(total_size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	ptr_str = str;
	while (*s1)
	{
		*str++ = *s1++;
	}
	while (*s2)
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (ptr_str);
}
