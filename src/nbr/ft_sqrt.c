/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:03:03 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:39:01 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_nbr.h"

/**
 * @brief Calculates the square root of a non-negative integer.
 *
 * This function calculates the integer square root of the given non-negative
 * integer using an iterative approach. It subtracts odd numbers from the input
 * number until it becomes zero or negative. The number of iterations determines
 * the square root.
 *
 * @param nb The non-negative integer for which to calculate the square root.
 * @return The integer square root of the input number.
 *         If the input number is negative, the function returns 0.
 *         If the input number is not a perfect square, the function returns
 *         the floor value of the square root.
 *
 * @note This function uses a simple iterative approach to calculate 
 *       the square root.
 *       For large numbers, more efficient algorithms like the Babylonian method
 *       or
 *       the Newton-Raphson method might be preferred for better performance.
 *
 * @remarks The function assumes that the input number is a non-negative integer.
 *          If a negative number is passed, the function will return 0 to avoid
 *          entering an infinite loop.
 */
int	ft_sqrt(int nb)
{
	int	root;
	int	odd;

	if (nb < 0)
		return (0);
	root = 1;
	odd = 1;
	while (nb - odd > 0)
	{
		nb = nb - odd;
		odd += 2;
		root += 1;
	}
	if (nb != 0)
		return (root - 1);
	return (root);
}
