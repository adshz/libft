/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:34:57 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:56:23 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Deletes a single element from the linked list.
 *
 * This function deletes the specified element @p lst from the linked list.
 * The function @p del is applied to free the memory of the element's content.
 *
 * @param lst The element to delete.
 * @param del The function to delete an element's content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
