/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:01:51 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:50:28 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Checks if a character is a printable ASCII character.
 *
 * This function determines whether the specified character @p c is a printable
 * ASCII character. A printable ASCII character is one with an ASCII value
 * between 32 (space) and 126 (tilde), inclusive. These characters are commonly
 * considered readable and suitable for display.
 *
 * @param c The character to check.
 * @return 1 if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
	{
		return (1);
	}
	return (0);
}
