/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:50:27 by szhong            #+#    #+#             */
/*   Updated: 2023/11/08 15:44:45 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	char	target;
	int	len;

	src = (char *)s;
	target = (char )c;
	len = ft_strlen(src);
	if (target == 0)
		return (src);
	while (len >= 0 && *src)
	{
		if (*(src + len) == target)
		       return (src + len);
		len--;	
	}
	return (0);
}*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (char )c)
			temp = s;
		s++;
	}
	if (*s == (char )c)
		return (char *)s;
	else 
		return ((char *)temp);
}
