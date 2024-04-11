/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:34:37 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:39:33 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_nbr.h"

/**
 * @brief Swaps the values of two integers.
 *
 * Swaps the values of the integers pointed to by @p a and @p b.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
