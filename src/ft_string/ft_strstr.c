/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:41:15 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:22:49 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Locates the first occurrence of a substring in a string.
 *
 * This function finds the first occurrence of the substring @p to_find in the
 * string @p str. The terminating null bytes ('\0') are not compared.
 *
 * @param str The string to be searched
 * @param to_find The substring to find within @p str.
 * @return A pointer to the beginning of the located substring in @p str,
 * 	   or NULL if the substring is not found.
 *
 * @note If @p to_find is an empty string, the function returns @p str.
 */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j) && *(str + i + j) != '\0')
			j++;
		if (*(to_find + j) == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
