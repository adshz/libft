/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:55:41 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:55:48 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Clears the linked list, applying a deletion function to each element.
 *
 * This function clears the linked list pointed to by @p lst. For each element,
 * the function @p del is applied to free the allocated memory. The linked list
 * pointer @p lst is set to NULL after clearing.
 *
 * @param lst A pointer to a pointer to the first element of the linked list.
 * @param del The function to delete an element's content.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*helper;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		helper = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = helper;
	}
	*lst = 0;
}
