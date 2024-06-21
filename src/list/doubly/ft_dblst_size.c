/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblst_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:40:16 by szhong            #+#    #+#             */
/*   Updated: 2024/06/21 15:05:47 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
#include <stdlib.h>

/*@
 * @brief Returns the size of a doubly linked list
 *
 * Counts and returns the number of nodes in a doubly linked list @p lst.
 *
 * @param dblst A pointer to any node of the linked list
 * @return The size of the doubly linked list
 */
int	ft_dblst_size(t_dblst *dblst)
{
	int	count;

	if (!dblst)
		return (-1);
	count = 0;
	while (dblst->prev != NULL)
		dblst = dblst->prev;
	while (dblst)
	{
		dblst = dblst->next;
		count++;
	}
	return (count);
}
