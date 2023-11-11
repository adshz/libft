/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:10:47 by szhong            #+#    #+#             */
/*   Updated: 2023/11/11 22:47:22 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_cpy;
	size_t	trim_len;
	char	*result;
	size_t	start;
	size_t	last;
	size_t	i;

	trim_len = 0;
	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] == *set)
		i++;
	start = i;
	printf("start - %ld\n", start);
	i = ft_strlen(s1);
	while (s1[i - 1] == *set)
		i--;
	last = i;
	printf("last - %ld\n", i);
	trim_len = last - start;
	printf("trim_len:%ld\n", trim_len);
	str_cpy = (char *)malloc(sizeof(char) * (trim_len + 1));
	if (str_cpy == NULL)
		return (NULL);
	result = str_cpy;
	i = start;
	while (*s1 != '\0' && i < last)
	{
		*str_cpy++ = s1[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (result);
}	
	
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_cpy;
	size_t	trim_len;
	char	*result;
	size_t	i;

	trim_len = 0;
	if (s1 == NULL)
		return (NULL);
	here it will be a problem because the pointer of s1 is in a different positio
	while (*s1 == *set)
		s1++;
	while (*s1 != *set)
		trim_len++;

	while (*(s1 + i) != '\0')
	{
		// this will be a problem. because there are space between "Hello world!"
		if (*s1 == *set)
		{
			s1++;
			printf("%c\n", *s1);
		}
		else
		{
			trim_len++;
			i++;
		}
	}
	str_cpy = (char *)malloc(sizeof(char) * (trim_len + 1));
	if (str_cpy == NULL)
		return (NULL);
	result = str_cpy;
	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*s1 == *set)
			s1++;
		else
		{
			*str_cpy++ = *s1++;
			i++;
		}
	}
	return (result);
}
// thing here to be concerned -> s1 pointer is move around
// the return value is Hellow
// it should be Hello world!*/
//
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_cpy;
	size_t	trim_len;
	char	*result;
	size_t	i;

	i = 0;
	trim_len = 0;
	if (s1 == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		// this will be a problem. because there are space between Hello world!"
		if (*s1 == *set)
		{
			s1++;
			printf("%c\n", *s1);
		}
		else
		{
			trim_len++;
			i++;
		}
	}
	str_cpy = (char *)malloc(sizeof(char) * (trim_len + 1));
	if (str_cpy == NULL)
		return (NULL);
	result = str_cpy;
	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*s1 == *set)
			s1++;
		else
		{
			*str_cpy++ = *s1++;
			i++;
		}
	}
	return (result);
}*/
/* draft 1
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_cpy;
	size_t	s1_size;
	size_t	trim_len;

	if (s1 == NULL)
		return (NULL);
	s1_size = ft_strlen(s1) + 1;
	str_cpy = (char *)malloc(sizeof(char) * s1_size);
	if (str_cpy == NULL)
		return (NULL);
	while (*s1)
	{
		*str_cpy++ = *s1++;
	}
	str_cpy = '\0';
	while (*str_cpy == *set)
	{
		str_cpy++;
	}
	while (*str_cpy != '\0')
	{
		trim_len++;
	}
	str_cpy = '\0';
	return (str_cpy);
}*/

int	main()
{
	char	*str2 = "42Londonxxxxxxxxxxxxxxxxxxxxxxxxx";
	char	*str = "xxxxxxxxxHello world!";
	char	c[] = "x";
	char	*result;

	printf("test 1: %s\n", str);
	result = ft_strtrim(str, c);
	printf("after trimming - %s\n", result);
	printf("test 2: %s\n", str2);
	result = ft_strtrim(str2, c);
	printf("after trimming - %s\n", result);
}
