/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:07:26 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:04:37 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Sets the first n bytes of a memory block to a specified value.
 *
 * Sets the first @p n bytes of the memory block @p s to the byte value @p c.
 *
 * @param s The memory block to set.
 * @param c The byte value to set.
 * @param n The number of bytes to set.
 * @return A pointer to the modified memory block.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dst;

	dst = s;
	while (n > 0)
	{
		*dst = (unsigned char) c;
		dst++;
		n--;
	}
	return (s);
}
