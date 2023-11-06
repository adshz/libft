/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:25:51 by szhong            #+#    #+#             */
/*   Updated: 2023/11/06 22:00:59 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

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
/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*src;
	unsigned char	uc;

	src = s;
	uc = c;
	i = 0;
	if (*src == '\0' || n == 0)
		return (0);
	while (*src != '\0' && i < n)
	{
		if (*(src + i) == uc)
			return (void *)(src + i);
		i++;
	}
	return (0);
}

int	main()
{
	char	s[] = {0, 1, 2, 3, 4, 5};
	void	*p;

	p = &s[0];
	printf("%p, %s\n", p, (char *)p);
	p = ft_memchr(p, 2, 3);
	printf("%p, %s\n", p, (char *)p);
	return (0);
}*/
