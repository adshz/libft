/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:30:03 by szhong            #+#    #+#             */
/*   Updated: 2023/11/06 18:56:48 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memmove(void* dest, const void* src, size_t n) {
    char* d = (char*)dest;
    const char* s = (const char*)src;

    if (d == s || n == 0) {
        return dest;
    }

    if (d < s) {
        // Copy from the beginning of source to the beginning of destination.
        while (n--) {
            *d++ = *s++;
        }
    } else {
        // Copy from the end of source to the end of destination.
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }

    return dest;
}
/* I don't know why it is wrong. it can't pass the test
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char	*d;
	size_t	i;

	s = (const char *)src;
	d = (char *)dest;
	if ((s < d) && (s + n > d)) 
	{
		i = n;
		while (i > 0 && s && d)
		{
			*(d + i) = *(s + i);
			i--;
		}
	} else if ((d < s ) && (d + n >= s))
	{
		i = 0;
		while (i < n && s && d)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n && s && d)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dest);
}*/
