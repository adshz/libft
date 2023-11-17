/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:41 by szhong            #+#    #+#             */
/*   Updated: 2023/11/08 11:35:21 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	d_len = 0;
	s_len = 0;
	while (d_len < size && dst[d_len])
		d_len++;
	while ((d_len + s_len + 1) < size && src[s_len])
	{
		dst[d_len + s_len + 1] = src[s_len];
		s_len++;
	}
	if (d_len != size)
		dst[d_len + s_len] = '\0';
	return (d_len + ft_strlen(src));
}
