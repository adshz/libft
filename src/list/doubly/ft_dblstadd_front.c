/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:59:40 by szhong            #+#    #+#             */
/*   Updated: 2024/06/21 18:43:19 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"

/**
 *@breif Add the node to the front of existing nodes.
 *
 *The function inserts a node before the head node.
 *
 *@param dblst a double pointer to the linked list for modifying the pointer
 *@param new a node to insert before the head node
 **/
void	ft_dblstadd_front(t_dblst **dblst, t_dblst *new)
{
	if (!new)
		return ;
	if (!dblst || !*dblst)
	{
		*dblst = new;
		return ;
	}
	new->next = *dblst;
	(*dblst)->prev = new;
	*dblst = new;
}
