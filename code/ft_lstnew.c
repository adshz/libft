/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:55:50 by szhong            #+#    #+#             */
/*   Updated: 2023/11/15 23:05:34 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
 *typedef struct s_list
 {
 	void	*content;
	struct s_list *next;
 } t_list;
 * */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}/*

int	main()
{
//	char	s[] = "Hello world";
	int	i = 567;
	t_list	*node;

	node = ft_lstnew(&i);
	ft_putnbr_fd(*((int *)(node->content)), 1);
}*/
