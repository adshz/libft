/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:51:42 by szhong            #+#    #+#             */
/*   Updated: 2023/09/06 12:52:22 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Writes a character to the standard output.
 *
 * Writes the character @p c to the standard output (file descriptor 1)
 * using the write function from the unistd.h library.
 *
 * @param c The character to be written.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
