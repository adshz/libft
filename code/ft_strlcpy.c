/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:09:52 by szhong            #+#    #+#             */
/*   Updated: 2023/11/01 16:50:36 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	offset;

	len = 0;
	offset = size;
	if (size > 0)
	{
		while (*src && offset > 1)
		{
			*dst++ = *src++;
			offset--;
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
size_t	ft_strlcpy(char	* dst, const char *src, size_t dstsize)
{
	size_t	offset;
	
	offset = 0;
	if (dstsize > 0)
	{
		while (*(src + offset) != '\0')
		{
			if (offset == dstsize)
			{
				offset--;
				break;
			}
			*(dst + offset) = *(src + offset);
			offset++;
		}

	}
	while (*(src + offset) != '\0')
		offset++;
	return (offset);
}

void test(int size)
{
	//		    0 1 2 3 4 5 6 7 8 9 10 11 12 13  14  15  16  17
	//		    H e l l o   t h e r e ,   V   e   n   u  s   \0
	char	string[] =  "coucou";
	char	buffer[19];
	int	r;
	
	memset(buffer, 'A', 6);
	r = ft_strlcpy(buffer,string,size);
	printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
	printf("%c\n", buffer[6]);
}

int main()
{
//	test(19);
//	test(10);
//	test(1);
	test(6);
	
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
