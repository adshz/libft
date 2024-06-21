/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:00:18 by szhong            #+#    #+#             */
/*   Updated: 2024/06/21 18:49:06 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_dblist
{
	void				*content;
	struct s_dblist		*next;
	struct s_dblist		*prev;
}					t_dblst;

// singly linked list
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

// doubly linked list
t_dblst	*ft_dblst_new(void *content);
void	ft_dblst_delnode(t_dblst **dblst, t_dblst *del);
void	ft_dblstadd_back(t_dblst **dblst, t_dblst *new);
void	ft_dblstadd_front(t_dblst **dblst, t_dblst *new);
int		ft_dblst_size(t_dblst *dblst);
#endif
