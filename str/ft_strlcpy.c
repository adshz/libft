/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:00:51 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:14:29 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Copies a string with size restriction.
 *
 * Copies up to @p size - 1 characters from the string @p src to the
 * destination string @p dst, ensuring null-termination.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The total length of the source string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size > 0)
	{
		while (*src && size > 1)
		{
			*dst++ = *src++;
			size--;
			len++;
		}
		*dst = '\0';
	}
	while (*src)
	{
		src++;
		len++;
	}
	return (len);
}
