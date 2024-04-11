/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:15:17 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:57:33 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Returns the last element of the linked list.
 *
 * This function returns a pointer to the last element of the linked list
 * pointed to by @p lst.
 *
 * @param lst The pointer to the first element of the linked list.
 * @return A pointer to the last element, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	last = lst;
	return (last);
}
