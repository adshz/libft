/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:00:51 by szhong            #+#    #+#             */
/*   Updated: 2023/11/08 11:35:57 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
