/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:34:37 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:02:18 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Compares the first n bytes of two memory blocks.
 *
 * Compares the first @p n bytes of memory blocks pointed to by @p s1 and @p s2.
 *
 * @param s1 The first memory block.
 * @param s2 The second memory block.
 * @param n The number of bytes to compare.
 * @return 0 if the first n bytes are equal, or the difference of the first
 * differing bytes if not equal.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;

	src1 = s1;
	src2 = s2;
	while (n > 0)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		src1++;
		src2++;
		n--;
	}
	return (0);
}
