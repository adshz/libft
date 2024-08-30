/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:00:18 by szhong            #+#    #+#             */
/*   Updated: 2024/08/30 14:17:04 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
#include <stdlib.h>

/**
 * @brief Add a new node to the end of list
 *
 * This function adds a node @p new to the end of linked list 
 * pointed by @p dbslst.
 *
 * @param dblst A double pointer pointing to the first node of the linked list
 * @param new The new node to add to the end of the linked list
 */
void	ft_dblstadd_back(t_dblst **dblst, t_dblst *new)
{
	t_dblst	*last;

	if (!new || !dblst)
		return ;
	if (*dblst == NULL)
	{
		*dblst = new;
		return ;
	}
	last = *dblst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	new->next = NULL;
	return ;
}
