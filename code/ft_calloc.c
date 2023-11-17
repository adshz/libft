/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:23:39 by szhong            #+#    #+#             */
/*   Updated: 2023/11/17 18:17:54 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_size;

	if (size != 0 && nmemb > ((size_t)(-1)) / size)
		return (NULL);
	if ( nmemb >= SIZE_MAX - 1 || size >= SIZE_MAX - 1)
		return (NULL);
	total_size = nmemb * size;
	mem = malloc(total_size);
	if (mem == NULL)
		return (0);
	ft_memset(mem, 0, total_size);
	return (mem);
}
