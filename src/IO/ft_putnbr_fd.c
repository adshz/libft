/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:58 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:06:13 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_io.h"

/**
 * @brief Writes an integer to the specified file descriptor.
 *
 * Writes the integer @p n to the file descriptor @p fd.
 *
 * @param n The integer to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	nbl;

	nbl = n;
	if (nbl == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nbl < 0)
	{
		nbl *= -1;
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nbl, fd);
	}
	else if (nbl > 9)
	{
		ft_putnbr_fd(nbl / 10, fd);
		ft_putnbr_fd(nbl % 10, fd);
	}
	else
		ft_putchar_fd(nbl + 48, fd);
}
