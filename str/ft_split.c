/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:30:55 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:08:29 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Counts the number of words in a string separated by a delimiter.
 *
 * Counts the number of words in the string @p s, using the delimiter @p c.
 *
 * @param s The string to count words in.
 * @param c The delimiter character.
 * @return The number of words in the string.
 */
static size_t	count_words(char const *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			while (*s && *s != c)
				s++;
			word_count++;
		}
	}
	return (word_count);
}

/**
 * @brief Splits a string into an array of substrings based on a delimiter.
 *
 * Splits the string @p s into an array of substrings using the delimiter @p c.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @return An array of substrings or NULL on failure.
 */
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != '\0' && s[i + j] != c)
			j++;
		if (s[i] != '\0')
			arr[k++] = ft_substr(s, i, j);
		i = i + j;
	}
	arr[k] = NULL;
	return (arr);
}
