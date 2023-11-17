/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:42:32 by szhong            #+#    #+#             */
/*   Updated: 2023/11/17 20:14:49 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
/*
 *typedef strcut s_list 
 {
 	void	*content;
	struct s_list next;
 } t_list;

 * */
/*
int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (*lst != NULL)
	{
		len++;
		lst++;
	}
	return (len); 
}*/

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

int	main()
{
	// create nodes
	t_list	*node1 = ft_lstnew((void *)42);
	t_list	*node2 = ft_lstnew((void *)17);
	t_list	*node3 = ft_lstnew((void *)19);

	// connect nodes to form a linked list
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	// print the content of each node
	t_list *current;
	current = node1;
	int	lst_size = ft_lstsize(node1);
	while (current != NULL)
	{
		printf("node %d\n", (int)(intptr_t)current->content);
		current = current->next;
	}
	printf("size is %d\n", lst_size);

	current = node1;
	while (current != NULL)
	{
		t_list *temp = current;
		current = current->next;
		free(temp);
	}
	// Free allocated memory for the linked list
	return (0);
}
