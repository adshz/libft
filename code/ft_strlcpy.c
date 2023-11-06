/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:09:52 by szhong            #+#    #+#             */
/*   Updated: 2023/11/06 15:41:31 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/* wrong one
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (*(src + i) != '\0')
		{
			if (i == size)
			{
				i--;
				break;
			}
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + 1) = '\0';
	}
	return (i);
}*/

// correct one
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
/*
void test(int size)
{
	//		    0 1 2 3 4 5 6 7 8 9 10 11 12 13  14  15  16  17
	//		    H e l l o   t h e r e ,   V   e   n   u  s   \0
	char	string[] =  "Hello world";
	char	buffer[19];
	int	r;
	
	memset(buffer, 'A', 6);
	r = ft_strlcpy(buffer,string,size);
	printf("Copied source string '%s' into destination string '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
	test(12);
//	test(19);
//	test(10);
//	test(1);
//	test(6);
	
	return(0);
}
//
//size_t	ft_strlcpy(char *dst, const char *src, size_t size)
//{
//	size_t	i;
//	size_t	len;
//	
//	if (dst == NULL || src == NULL || size == 0) return (0);
//
//	i = 0;
//	len = 0;
//	while (i < size && src[i] != '\0')
//	{
//		dst[i] = src[i];
//		i++;
//	}
//	i = len;
//	while (i < size)
//	{
//		dst[i] = '\0';
//		i++;
//	}
//	return (len);
//}*/
