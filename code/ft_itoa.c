/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:00:39 by szhong            #+#    #+#             */
/*   Updated: 2023/11/17 19:29:15 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	digit_len(int n)
{
	long int	nbl;
	int			len;

	len = 0;
	nbl = n;
	if (n <= 0)
		len = 1;
	while (nbl != 0)
	{
		nbl /= 10;
		len++;
	}
	return (len);
}

static char	*ft_fill(char *s, size_t nbr, long int len)
{
	while (nbr > 0)
	{
		s[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}

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
