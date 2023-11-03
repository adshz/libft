/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:22:45 by szhong            #+#    #+#             */
/*   Updated: 2023/11/03 20:04:42 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

/*size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	offset;

	len = 0;
	offset = size;	
}*/

int	main()
{
	char d[] = "Little Bread";
	const char s[] = " Pedlar";
	size_t result;
	size_t	buffersize = 4;

	printf("the length of d is: %ld\n the length of s is: %ld\n", strlen(d), strlen(s));
	printf("the original d: %s\n", d);
	printf("-------function occur----\n");
	result = strlcat(d, s, buffersize);
	printf("the size of d is :%ld \n the size of s is : %ld \n the buffersize for strlcat is %ld\nthe length of d: %ld\n", sizeof(d), sizeof(s), buffersize, strlen(d));
	printf("the returned size is %ld\nthe final cancatenation of d %s\n the the length of d is :%ld\nsize of d: %ld\n ", result, d, strlen(d), sizeof(d));
	return (0);
}
