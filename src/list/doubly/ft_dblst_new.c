/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblst_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:38:25 by szhong            #+#    #+#             */
/*   Updated: 2024/06/21 14:51:41 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
#include <stdlib.h>

/**
 * @breif Create and Initialise a new node for an intger.
 *
 * The purpose of the function is to create and initialise value for the node.
 *
 * @param data The element to assign as the list element
 * @return A pointer to the new node or NULL on memory allocation failure
 */
t_dblst	*ft_dblst_new(void *content)
{
	t_dblst	*node;

	node = (t_dblst *)malloc(sizeof(t_dblst));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
