/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:50:40 by szhong            #+#    #+#             */
/*   Updated: 2023/11/08 21:04:12 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*(needle) == '\0')
		return ((char *)haystack);
	while ((i < n) && (*(haystack + i) != '\0' ))
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && *(haystack + i + j) != '\0' && i + j < n)
			j++;
		if (*(needle + j) == '\0')
				return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	haystack[30] = "aaabcabcd";
	char	needle[10] = "aabc";
	char	*result;

	result = ft_strnstr(haystack, needle, 8);
	printf("%s\n", result);
}
char	*strnstr(const char *src, const char *find, size_t slen)
{
	char	c;
	char	sc;
	size_t	len;

	if ((c = *find++) != '\0')
	{
		len = strlen(find);
		do
		{
			do
			{
				if (slen-- < 1 || (sc = *src++) == '\0')
					return (NULL);
			}
			while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(src, find, len) != 0);
		s--;
	}
	return ((char *)src);
}*/
