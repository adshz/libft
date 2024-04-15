/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:59:49 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:53:00 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
#include <stdlib.h>

/**
 * @brief Adds a new element to the front of the linked list.
 *
 * This function adds the element @p new to the front of the linked list
 * pointed to by @p lst.
 *
 * @param lst A pointer to a pointer to the first element of the linked list.
 * @param new The new element to add to the front of the linked list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new -> next = *lst;
	*lst = new;
}
