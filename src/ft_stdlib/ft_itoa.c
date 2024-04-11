/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:00:39 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 17:17:47 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stdlib.h"

/**
 * @brief Calculates the length of the digits in an integer.
 *
 * This static function calculates the length of the digits in the given
 * integer @p n.
 *
 * @param n The integer to calculate the digit length for.
 * @return The length of the digits in the integer.
 */
static size_t	digit_len(int n)
{
	long int	nbl;
	size_t		len;

	len = 0;
	nbl = n;
	if (n <= 0)
	{
		len = 1;
	}
	while (nbl != 0)
	{
		nbl /= 10;
		len++;
	}
	return (len);
}

/**
 * @brief Fills the character array with the digits of the integer.
 *
 * This static function fills the character array @p s with the digits of the
 * integer @p nbr starting from the end.
 *
 * @param s The character array to fill.
 * @param nbr The integer to extract digits from.
 * @param len The length of the character array.
 * @return The modified character array.
 */
static char	*ft_fill(char *s, size_t nbr, long int len)
{
	while (nbr > 0)
	{
		s[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}

/**
 * @brief Converts an integer to a string.
 *
 * This function converts the integer @p n to a string representation.
 *
 * @param n The integer to convert.
 * @return A newly allocated string representing the integer.
 * @note The function returns NULL on allocation failure.
 */
char	*ft_itoa(int n)
{
	char		*result;
	long int	nbl;
	int			len;

	nbl = n;
	len = digit_len(nbl);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len--] = '\0';
	if (nbl == 0)
		result[0] = '0';
	if (nbl < 0)
	{
		nbl *= -1;
		result[0] = '-';
	}
	result = ft_fill(result, nbl, len);
	return (result);
}
