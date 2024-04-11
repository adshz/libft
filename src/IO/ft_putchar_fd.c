/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:41:17 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:05:02 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_io.h"

/**
 * @brief Writes a character to the specified file descriptor.
 *
 * Writes the character @p c to the file descriptor @p fd.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
