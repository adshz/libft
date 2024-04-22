/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:23:35 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:39:24 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_nbr.h"
#include <stdlib.h>
/**
 * @brief Generates an array of integers within a given range.
 *
 * Allocates memory for an array of integers and fills it with values
 * ranging from @p min to @p max - 1. The range includes @p min but
 * excludes @p max.
 *
 * @param min The lower bound of the range (inclusive).
 * @param max The upper bound of the range (exclusive).
 * @return A pointer to the newly allocated array of integers, or NULL
 *         if @p min is greater than or equal to @p max or if memory
 *         allocation fails.
 */
int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;
	int	*nullptr;

	i = 0;
	nullptr = (int *)0;
	if (min >= max)
		return (nullptr);
	size = max - min;
	result = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
