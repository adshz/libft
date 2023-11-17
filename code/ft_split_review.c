
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:30:55 by szhong            #+#    #+#             */
/*   Updated: 2023/11/16 16:21:28 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Where do I start
// we have two parameter, 
// --a string to be split
// --a character to be delimiter ( a character to mark the beginning of end of a unit of data)
// return value
// --an array of new strings from the split.
// --NULL if allocation fails
//
// example - "Hello/world"
// after (ft_split("Hello/world", '/') => [ "Hello", "world"]
//
// question -> what if you have "Hello/world/my/name/is/david")
// answer -> i think it will result ["Hello", "world", "my", "name", "is", "david"] 
// 				    an array of 7 elements
// question -> what if you have nothong to meet the character?
// answer -> it should didn't do anything
//
// What strategy?
// let's focus on the one delimiter, and then multiple delimiters
//
// I need a variable to store the value
// then we have a string here, let's say "Hello/world" then we have "/" as the delimiter
// we can create a tracker for the string 's' for the loop
// it will loop till the character c is matched 
// so we need a if-else conditional logic to locate the matched character
// when the condition is met, the tracker i will be the split point
// 	initial thought -> you can use i-1, i+1, but the example of defeating this design will be
// 	you have a string like /////hello/////world "/" => ["Hello", "world"] 
// 		Christian said the result has to be clean string
// 
// the next step is to know how many characters because we need to know the length of contents
// by knowing that, we can allocate the sufficient space for the string
// since we split a string into two strings, we need to two tackers to track the two lengths 

// assuming the delimiter exists

#include <stdio.h>
static size_t	count_words(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**arr;

	printf("Before allocating the memory\n");
	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);	
	k = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != '\0' && s[i + j] != c)
			j++;
		if (s[i] != '\0')
		{
			arr[k++] = ft_substr(s, i, j);
		}
		i = i + j;
	}
	arr[k] = NULL;
	return (arr);
}
/*
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	size;
	char	**arr;

	k = count_words(s, c);
	printf("Before allocating the memory\n");
	arr = (char **)malloc((k + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);	
	k = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			printf("\n-----Loop Start--------\n");
			printf("%zu\n", j);
			j = i;	
			while (s[i + j] != c && j < ft_strlen(s))
				j++;
			size = j - i + 1;
			printf("size (j[%zu] - i[%zu] + 1) is %zu\n",j, i, size);
			arr[k] = (char *)malloc(size * sizeof(char));
			if (arr[k] == NULL)
				return (NULL);
			printf("arr[%zu] is %s, s is %s\ni is %zu, j is %zu\n",k, arr[k],s,i,j);
			
			k++;
			i = j;
			printf("end i is %zu, j is %zu\n", i, j);
			printf("-----Loop End--------\n");
		}
		i++;
	}
	arr[k] = NULL;
	return (arr);

}*/


/*
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	size;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] != c)
				j++;
			size = j - i + 1;
			arr[k] = malloc(size * sizeof(char));
			if (arr[k] == NULL)
				return (NULL);
			ft_strlcpy(arr[k], &s[i], size);
			k++;
			i = j;
		}
		i++;
	}
	return (arr);
}*/

int	main()
{
	char	s[] = "    Hello world";
	char	**result;
	int	i = 0;

	result = ft_split(s, ' ');
//	ft_putendl_fd(result[0], 1);
//	ft_putendl_fd(result[1], 1);
	printf("the 0th is %s, the 1st is %s\n", result[0], result[1]);
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}
