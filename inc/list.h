/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:00:18 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 19:07:09 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_front(t_list **list, t_list *new);
void	ft_lstadd_back(t_list **list, t_list *new);
void	ft_lstdelone(t_list *list, void (*del)(void *));
void	ft_lstclear(t_list **list, void (*del)(void *));
void	ft_lstiter(t_list *list, void (*f)(void *));
int		ft_lstsize(t_list *list);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *list);
t_list	*ft_lstmap(t_list *list, void *(*f)(void *), \
		void (*de)(void *));
#endif
