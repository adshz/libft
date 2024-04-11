/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:23:44 by szhong            #+#    #+#             */
/*   Updated: 2023/09/06 13:24:50 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

/**
 * @brief Swaps the values of two integers.
 *
 * This function swaps the values of the integers pointed to by @p a and @p b.
 * It uses a temporary variable to store the value of @p a, assigns the value 
 * of @p b to @p a, and then assigns the temporary value to @p b.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 *
 * @remarks The function operates on the actual values pointed to 
 *          by the pointers @p a and @p b. 
 *          The changes made to the values are reflected in the
 *          original variables passed to the function.
 */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
