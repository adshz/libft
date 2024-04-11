/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:41 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:12:53 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Concatenates strings with size restriction.
 *
 * Concatenates the string @p src to the end of the string @p dst,
 * limiting the total size to @p size.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The total length of the concatenated string.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	j;
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = d_len;
	j = 0;
	if (size <= d_len)
		return (s_len + size);
	while (i < (size - 1) && src[j])
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
