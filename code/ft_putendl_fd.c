/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:04:33 by szhong            #+#    #+#             */
/*   Updated: 2023/11/13 14:35:40 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
}/*
int	main()
{
	char	*s = "Hello world";
	char	*s1 = "42 school";
	
	int	fd = -3;
	ft_putendl_fd(s, fd);
	ft_putendl_fd(s1,fd);
}*/
