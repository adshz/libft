/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:37 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 18:07:41 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"
/**
 * @brief Converts a lowercase letter to its uppercase equivalent.
 *        If @p c is not a lowercase letter, it returns @p c unchanged.
 * @return The uppercase equivalent of @p c if it's a lowercase letter; 
 * 	   otherwise, returns @p c.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
