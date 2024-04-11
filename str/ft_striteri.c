/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:14:18 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:11:12 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Applies a function to each character in a string with its index.
 *
 * Applies the function @p f to each character in the string @p s,
 * along with its index.
 *
 * @param s The string to iterate.
 * @param f The function to apply.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	while (*(s + i) != '\0')
	{
		f(i, s + i);
		i++;
	}
}
