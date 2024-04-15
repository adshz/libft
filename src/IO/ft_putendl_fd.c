/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:33 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:05:28 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_io.h"
#include "ft_string.h"

/**
 * @brief Writes a string followed by a newline to the specified file descriptor.
 *
 * Writes the string @p s followed by a newline to the file descriptor @p fd.
 *
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
	{
		return ;
	}
	else
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
