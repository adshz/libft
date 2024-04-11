/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:29:54 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:38:38 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_nbr.h"

/**
 * @brief Raises a number to the power of an exponent.
 *
 * This function computes the power of @p n raised to the exponent @p pow.
 * It uses recursion to calculate the power. 
 * The base case for the recursion is when @p pow is equal to 0, in which case 
 * the function returns 1. 
 * For all other values of @p pow, the function multiplies @p n by the result of
 * `ft_pow(n, pow - 1)`.
 *
 * @note This function uses recursion might not be the most efficient method 
 * for calculating powers, especially for large exponents.
 *
 * @param n The base number.
 * @param pow The exponent to which the base number is raised. 
 * This should be an unsigned integer to avoid undefined behavior 
 * with negative powers.
 *
 * @return The result of raising @p n to the power of @p pow. 
 * 	   If @p pow is 0, the function returns 1. 
 * 	   Returns a long double that represents the computed power.
 */

long double	ft_pow(long double n, unsigned int pow)
{
	long double	product;

	product = 1;
	if (pow != 0)
	{
		product = n * ft_pow(n, pow - 1);
		return (product);
	}
	else
		return (1);
}
