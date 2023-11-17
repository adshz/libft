/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:59:49 by szhong            #+#    #+#             */
/*   Updated: 2023/11/17 19:42:26 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*typedef struct s_list 
 * {
 *	void	*content;
 *	struct s_list	*next;
 * } t_list;
 *
 *
 *
 *  lst : address of a pointer to the first link of a list
 * */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
//	new -> content	==> int new_value;
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
