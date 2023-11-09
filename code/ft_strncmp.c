/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:27:11 by szhong            #+#    #+#             */
/*   Updated: 2023/11/08 22:03:21 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

// this is because before i was using n > 0, it should be just the length n-1
// n is the size including the null terminator
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	printf("\nthis is the beginning: %ld\n", n);
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && *s1 == *s2 && n-1 > 0)
	{
		s1++;
		s2++;
		printf("%ld\n", n);
		n--;
	}
	return (*s1 - *s2);
}
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && (i < n))
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}
