/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:42:15 by szhong            #+#    #+#             */
/*   Updated: 2023/11/06 14:40:24 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n > 0)
	{
		if (*ptr1 < *ptr2)
			return (-1);
		else if (*ptr1 > *ptr2)
			return (1);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);	
}*/


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
		       return (*ptr1 - *ptr2);	
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);	
}
