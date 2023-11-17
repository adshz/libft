/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:14:18 by szhong            #+#    #+#             */
/*   Updated: 2023/11/15 16:55:30 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
static void	upperCase(unsigned int i, char *s)
{
	if (i % 2 == 0)
		s[i] = ft_toupper(s[i]);
	else
		s[i] = ft_tolower(s[i]);
}

int	main()
{
	char	s[] = "Happy New Year!";
	void	(*f)(unsigned int, char*);

	ft_putendl_fd(s, 1);
	f = upperCase;
	ft_putendl_fd("-----", 1);
	ft_striteri(s, f); 
	ft_putendl_fd(s, 1);
}*/
