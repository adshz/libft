/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:13:04 by szhong            #+#    #+#             */
/*   Updated: 2023/11/09 15:04:30 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*ptr;

	dup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ptr = dup;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (dup);
}
