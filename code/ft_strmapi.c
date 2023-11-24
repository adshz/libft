/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:54:36 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:15:28 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Applies a function to each character of a string.
 *
 * Applies the function @p f to each character of the string @p s,
 * creating a new string with the results.
 *
 * @param s The input string.
 * @param f The function to apply.
 * @return A new string with the applied function, or NULL on failure.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*arr;
	char	*result;

	if (s == NULL)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	result = arr;
	while (*s)
	{
		*arr++ = f(i++, *s++);
	}
	*arr = '\0';
	return (result);
}
