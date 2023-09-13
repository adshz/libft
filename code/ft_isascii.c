/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:46:57 by szhong            #+#    #+#             */
/*   Updated: 2023/09/12 17:43:41 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	int	result;

	result = 0;
	if (c >= 0 && c <= 127)
		result = 1;
	return (result);	
}
/*
int	main()
{
	int	test = 129;
//	int	large_result = 129;
	int	my_result = 0;
	int	libc_result = 0;

	my_result = ft_isascii(test);
	libc_result = isascii(test);
	printf("my result: %d\n", my_result);
	printf("libc result: %d", libc_result);
}*/
