/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:52:46 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:48:15 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Checks if a character is a valid ASCII character.
 *
 * This function checks if the specified character @p c is a valid ASCII
 * character. A character is considered a valid ASCII character if its ASCII
 * value is in the range [0, 127].
 *
 * @param c The character to check.
 * @return 1 if the character is a valid ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
	{
		return (1);
	}
	return (0);
}
