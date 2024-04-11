/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:27:56 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:03:51 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Moves n bytes from source to destination memory, handling overlap.
 *
 * Moves the first @p n bytes from memory block @p src to memory block @p dest.
 * Handles overlapping memory regions.
 *
 * @param dest The destination memory block.
 * @param src The source memory block.
 * @param n The number of bytes to move.
 * @return A pointer to the destination memory block.
 */
void	*ft_memmove(void *dest, void const *src, size_t n)
{
	char const	*s;
	char		*d;

	d = (char *)dest;
	s = (char const *)src;
	if (d == s || n == 0)
		return (d);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
