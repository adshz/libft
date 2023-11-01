/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:25:51 by szhong            #+#    #+#             */
/*   Updated: 2023/11/01 15:39:00 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char	uc;

	src = s;
	uc = c;
	while (n > 0)
	{
		if (*src == uc)
		{
			return (void *)src;
		}
		src++;
		n--;
	}
	return (0);
}
