/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:55:50 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:59:46 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

/**
 * @brief Creates a new list node with the given content.
 *
 * Allocates and initializes a new list node with the specified @p content.
 *
 * @param content The content to be stored in the new node.
 * @return A pointer to the new list node or NULL on failure.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
