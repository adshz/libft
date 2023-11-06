/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:57:06 by szhong            #+#    #+#             */
/*   Updated: 2023/11/06 22:28:53 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;
	char	target;

	src = (char *)s;
	target = (char )c;
	while (*src && *src != target)
		src++;
	if (*src == target)
		return (src);
	return (0);
}
