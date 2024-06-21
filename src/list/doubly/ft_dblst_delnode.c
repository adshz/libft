/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblst_delnode.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:57:34 by szhong            #+#    #+#             */
/*   Updated: 2024/06/21 15:02:07 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
#include <stdlib.h>

/**
 * @breif Delete one node from a doubly linked list
 *
 * The function deletes one desired element from the doubly linked list
 *
 * @param dblst a double pointer for modifying and updating the head node
 * @param del a target node to be deleted from the list
 * @note there are 3 points to focus on. 
 * 1. Deletion of the head node
 * 2. Deletion of the middle node
 * 3. Deletion of the last node
 * three if statement will happen in order
 * 1. Update the head pointer to the second pointer node
 * 2. if it isn't the last pointer then update the prev pointer of the next
 * 3. if it isn't the first pointer then update the next poiner of the prev
 */
void	ft_dblst_delnode(t_dblst **dblst, t_dblst *del)
{
	if (!*dblst || !del)
		return ;
	if (*dblst == del)
		*dblst = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	free(del);
	return ;
}
