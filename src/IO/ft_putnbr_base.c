/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 07:44:36 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 15:30:23 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_io.h"

/**
 * @brief Handles the negative number case for ft_putnbr_base.
 *
 * This function is called by ft_putnbr_base when the input number is negative.
 * It handles the special case of -2147483648 separately and recursively calls
 * ft_putnbr_base for the remaining part of the number.
 *
 * @param nbl The negative number to be handled.
 * @param base The base to be used for the conversion.
 */
void	negative_handle(long int nbl, char *base)
{
	if (nbl == -2147483648)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
		ft_putnbr_base(2, base);
		ft_putnbr_base(147483648, base);
	}
	else
	{
		nbl = nbl * -1;
		write(1, "-", 1);
		ft_putnbr_base(nbl, base);
	}
}

/**
 * @brief Checks if the base contains invalid characters.
 *
 * This function checks if the base string contains any characters with ASCII
 * values less than 33 or equal to 127.
 *
 * @param base The base string to be checked.
 * @return 1 if the base contains invalid characters, 0 otherwise.
 */
int	ft_notbase(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] < 33 || base[i] == 127)
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Checks if the string contains duplicate or invalid characters.
 *
 * This function checks if the string contains any duplicate characters 
 * or the '+' or '-' characters.
 *
 * @param str The string to be checked.
 * @param len The length of the string.
 * @return 1 if the string contains duplicate or invalid characters, 
 	   0 otherwise.
 */
int	ft_notallowed(char *str, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	int				check;

	i = 0;
	j = 0;
	check = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				check = 1;
			else if (str[i] == '+' || str[i] == '-')
				check = 1;
			else if (str[j] == '+' || str[j] == '-')
				check = 1;
			j++;
		}
		i++;
	}
	return (check);
}

/**
 * @brief Converts an integer to a string representation in a given base.
 *
 * This function converts the input integer to its string representation 
 * in the specified base and outputs the result using ft_putchar. 
 * The base string can contain any characters, but must not have duplicates
 * or the '+' or '-' characters.
 *
 * @param nbr The integer to be converted.
 * @param base The base string to be used for the conversion.
 */
void	ft_putnbr_base(int nbr, char *base)
{
	int		base_value;
	char	symbol;
	long	nbl;

	nbl = nbr;
	if (nbl == -2147483648 || nbl < 0)
		return (negative_handle(nbl, base));
	base_value = 0;
	while (base[base_value] != '\0')
		base_value++;
	if (ft_notallowed(base, base_value) == 1 || ft_notbase(base) == 1
		|| base_value < 2)
		return ;
	if (nbr >= base_value)
		ft_putnbr_base(nbr / base_value, base);
	symbol = base[nbr % base_value];
	ft_putchar(symbol);
}
