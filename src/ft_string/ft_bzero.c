/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:02:44 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:40:03 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Sets the first n bytes of the memory area pointed to by s to zero.
 *
 * This function sets the first @p n bytes of the memory area pointed to by @p s
 * to zero (0).
 *
 * @param s A pointer to the memory area.
 * @param n The number of bytes to set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
