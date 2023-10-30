/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:18:56 by szhong            #+#    #+#             */
/*   Updated: 2023/09/19 16:33:59 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int	main()
{
	char dest[5];
	const char *source = "Hello, World!";
	size_t copied = strncpy(dest, source, sizeof(dest));  // Safe copy with bounds checking.
	printf("%ld\n", copied);
	printf("%s, %ld\n", dest, sizeof(dest));
}


