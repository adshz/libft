/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:57:05 by szhong            #+#    #+#             */
/*   Updated: 2023/10/31 18:16:07 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int	c, size_t n)
{
	unsigned char	*dst;

	dst = s;
	while (n > 0)
	{
		*dst = (unsigned char)c;
		dst++;
		n--;
	}
	return ((void *)s);
}
