/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:56:20 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:01:38 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Locates the first occurrence of a byte in a memory block.
 *
 * Finds the first occurrence of the byte @p c in the first @p n bytes of the
 * memory block pointed to by @p s.
 *
 * @param s The memory block to search.
 * @param c The byte to locate.
 * @param n The number of bytes to search.
 * @return A pointer to the first occurrence of the byte, or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		uc;

	src = s;
	uc = c;
	while (n > 0)
	{
		if (*src == uc)
			return ((void *)src);
		src++;
		n--;
	}
	return (0);
}
