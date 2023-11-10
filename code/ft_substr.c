/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:18:09 by szhong            #+#    #+#             */
/*   Updated: 2023/11/09 16:55:39 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ptr_substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	s += start;
	ptr_substr = substr;
	*(substr + len) = '\0';
	while (len-- && *s)
		*substr++ = *s++;
	return (ptr_substr);
}
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < len)
		return (0);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (s[start] != '\0' && start < len + 1)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}*/
/*
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    i = 0;
    if (ft_strlen(s) < len)
        return (NULL);

    substr = (char *)malloc((len + 1) * sizeof(char));
    if (substr == NULL)
        return (NULL);

    while (start < ft_strlen(s) && s[start] != '\0' && i < len)
    {
        substr[i] = s[start];
        start++;
        i++;
    }

    substr[i] = '\0';
    return (substr);
}*/

