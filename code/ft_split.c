
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:30:55 by szhong            #+#    #+#             */
/*   Updated: 2023/11/16 16:21:28 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	in_word;
	size_t	word_count;

	i = 0;
	in_word = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (in_word == 0)
			{
				in_word = 1;
				word_count++;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (word_count);
}

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
		arr[k++] = ft_substr(s, i, j);
		i = i + j;
	}
	arr[k] = NULL;
	return (arr);
}
