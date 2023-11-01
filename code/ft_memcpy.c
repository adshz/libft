/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:50:43 by szhong            #+#    #+#             */
/*   Updated: 2023/10/31 18:05:56 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = src;
	d = dest;
	while (i < n && s && d)
	{
		// *(d + i) = *(s + i);
		d[i] = s[i];
		i++;
	}
	return (dest);
}
