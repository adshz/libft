/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:15:17 by szhong            #+#    #+#             */
/*   Updated: 2023/11/17 20:28:17 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (NULL)
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	last = lst;
	return (last);
}
