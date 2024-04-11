/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:48:46 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:02:57 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Copies n bytes from source to destination memory.
 *
 * Copies the first @p n bytes from memory block @p src to memory block @p dest.
 *
 * @param dest The destination memory block.
 * @param src The source memory block.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory block.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	s = src;
	d = dest;
	while (i < n && s && d)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
