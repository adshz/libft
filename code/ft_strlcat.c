/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:22:45 by szhong            #+#    #+#             */
/*   Updated: 2023/11/06 21:44:03 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

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
		dst[d_len + s_len] = src[s_len];
		s_len++;
	}
	if (d_len != size)
			dst[d_len + s_len] = '\0';
	return (d_len + ft_strlen(src));
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	output;

	if (size == 0 || *dst == '\0' || *src == '\0')
		return (0);	
	i = ft_strlen(dst);
	output = i + ft_strlen(src);
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
		if (i == size - 1)
			break;
	}
	*(dst + i) = '\0';
	return (output);

}
*/
/*
the length of d is: 12
the length of s is: 7
the original d: Little Bread
-------function occur----
the size of d is :13
the size of s is : 8
the buffersize for strlcat is 4
the length of d: 12
the result of source string is 11
*/
int	main()
{
	//          0 1 2 3 4 5 6  7 8 9 10 11 12
	//          L i t t l e [] B r e a d '\0'
	//          so the length of d is 12 and the size is 13
	char d[50] = "Little Bread";
	//	    [] P e d l a r '\0'
	//	    0  1 2 3 4 5 6  7
	//	    the length of s is 7, the size is 8
	const char s[] = " Pedlaraaa";
	size_t result;
	// now I have size parameter of 4 which is smaller than dst size 13
	size_t	buffersize = 1;

	printf("the length of d is: %ld\n the length of s is: %ld\n", ft_strlen(d), ft_strlen(s));
	printf("the original d: %s\n", d);
	printf("-------function occur----\n");
	result = strlcat(d, s, buffersize);
	printf("the size of d is :%ld \n the size of s is : %ld \n the buffersize for strlcat is %ld\nthe length of d: %ld\n, the result of source string is %zu\n", sizeof(d), sizeof(s), buffersize, ft_strlen(d), result);
	//printf("the returned size is %ld\nthe final cancatenation of d %s\n the the length of d is :%ld\nsize of d: %ld\n ", result, d, strlen(d), sizeof(d));
	printf("%s\n", d);
	printf("%s\n", s);
	return (0);
}
