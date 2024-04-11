/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:13:25 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:39:13 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_nbr.h"

/**
 * @brief Checks if a given number is prime.
 *
 * This function determines whether the given integer is a prime number.
 * It checks for divisibility by iterating from two to the square root 
 * of the number.
 *
 * @param nb The integer to be checked for primality.
 * @return 1 if the input number is prime, 0 otherwise.
 *
 * @note A prime number is a natural number greater than 1 that 
 * 	 has no positive divisors other than 1 and itself.
 *
 * @remarks The function uses an iterative approach to check for divisibility.
 *          It optimizes the iteration by checking only up to the square root 
 *          of the number.If a number is not divisible by any integer 
 *          between 2 and its square root,
 *          it is prime.
 */
int	ft_is_prime(int nb)
{
	unsigned int	nbl;
	unsigned int	i;

	i = 2;
	if (nb < 2)
		return (0);
	nbl = nb;
	if (nbl == 2)
		return (1);
	else if (nbl % 2 == 0)
		return (0);
	while (i < nbl / 2)
	{
		if (nbl % i == 0)
			return (0);
		i++;
	}
	return (1);
}
