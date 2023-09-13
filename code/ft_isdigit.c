/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:07:08 by szhong            #+#    #+#             */
/*   Updated: 2023/09/12 16:32:54 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	unsigned int	i;

	i = 48;
	while (i < 58)
	{
		if (i == (unsigned int) c)
			return (1);
		i++;
	}
	return (0);
	
}
/*
int	main()
{
	int	test = '9';
	int	result;
	int	ogResult;

	result = ft_isdigit(test);
	printf("%d\n", result);
	ogResult = isdigit(test);	
	printf("ogResult %d\n", ogResult);
	if (result == 1)
		printf("%s", "good go for a walk");
	return (0);
}*/
