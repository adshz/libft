/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:36:11 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:31:29 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Trim leading and trailing characters from a string.
 *
 * This function removes leading and trailing characters specified in the
 * set parameter from the input string s1.
 *
 * @param s1 The input string.
 * @param set The set of characters to be trimmed.
 * @return A newly allocated trimmed string, or NULL if memory allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*result;

	if (!s1 || !set)
	{
		return (0);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
	{
		i--;
	}
	result = ft_substr(s1, 0, i + 1);
	return (result);
}
