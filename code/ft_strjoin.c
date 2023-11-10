/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:13:25 by szhong            #+#    #+#             */
/*   Updated: 2023/11/10 17:34:10 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// s1 is the prefix string
// s2 is the suffix string
// return new string
// NULL if the allocation fail
// if my goal is to create the minimum viable function,
// what should I do?
// the function is to concatenate two strings
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*str;
	char	*ptr_str;

	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(total_size * sizeof(char));
	if (str == NULL)
		return (NULL);
	ptr_str = str;
	while (*s1)
	{
		*str++ = *s1++;
	}
	while (*s2)
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (ptr_str);
}

int	main()
{
//	char	*s1 = "come and let";
//	char	*s2 = " adore him Christ the Lord.";
	char	*s3 = NULL;
//	char	*result;
	
	printf("the s3 is: %ld\n", ft_strlen(s3));
//	result = ft_strjoin(s1, s3);
//	printf("the final result is: %s\n", result);
	return (0);
}
