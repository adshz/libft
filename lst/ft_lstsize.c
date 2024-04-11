/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:42:32 by szhong            #+#    #+#             */
/*   Updated: 2023/11/20 21:00:59 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

/**
 * @brief Returns the size of a linked list.
 *
 * Counts and returns the number of elements in the linked list @p lst.
 *
 * @param lst The pointer to the first element of the linked list.
 * @return The size of the linked list.
 */
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
