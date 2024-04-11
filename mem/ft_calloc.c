/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:23:39 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:44:30 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Allocates and initialises a block of memory.
 *
 * This function allocates a block of memory for an array of @p nmemb elements,
 * each of @p size bytes, and initialises the entire block to zero. The total
 * size if the allocated memory is calculated as @p nmemb * @p size.
 *
 * @param nmemb Number of elements in the array.
 * @param size Size of each element in bytes.
 * @return A pointer to the allocated and initialised memory block.
 * @note The function returns NULL on allocation failure or if the product of 
 * @p nmemb and @p size exceeds the representable range for size_t.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_size;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (size * nmemb > ((size_t)(-1)))
		return (NULL);
	if ((int)nmemb < 0 || (int)size < 0)
		return (NULL);
	total_size = nmemb * size;
	mem = malloc(total_size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, total_size);
	return (mem);
}
