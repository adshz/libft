/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:37:10 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 20:58:56 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

/**
 * @brief Creates a new linked list by applying a function to each element.
 *
 * Applies the function @p f to each element in the linked list @p lst,
 * creating a new linked list with the results.
 *
 * @param lst The pointer to the first element of the linked list.
 * @param f The function to apply to each element.
 * @param del The function to delete an element's content in case of failure.
 * @return A new linked list or NULL on failure.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_lst;
	t_list	*temp_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result_lst = 0;
	while (lst)
	{
		temp_node = ft_lstnew(f(lst->content));
		if (!temp_node)
		{
			ft_lstclear(&result_lst, del);
			return (0);
		}
		ft_lstadd_back(&result_lst, temp_node);
		lst = lst->next;
	}
	return (result_lst);
}
