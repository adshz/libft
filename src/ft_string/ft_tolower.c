/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:56:12 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 18:07:54 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"
/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * @param c The character to convert.
 * @return Lowercase equivalent if `c` is an uppercase letter, 
 * 	   otherwise returns `c`.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
