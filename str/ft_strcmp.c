/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:25:59 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 14:09:48 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Compares two strings.
 *
 * Compares the null-terminated strings @p s1 and @p s2
 *
 * @param s1 The first string
 * @param s2 TGhe second string
 * @return An integer less than, equal to, or greater than zero if @p s1
 * 	   is found, respectively, to be less than, to match, or be greater
 * 	   than @p s2
 */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 || *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
