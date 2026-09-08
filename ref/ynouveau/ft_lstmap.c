/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:37:08 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 16:54:05 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*));
//
//	Parameters:
// -----------
//		lst: The address of a pointer to a node.
//		f: The address of a function to apply to each node's content.
//		del: The address of the function used to delete a node's content.
//
//	Returns:
//	--------
//		The new list. NULL if the allocation fails.
//
//	Description:
//	------------
//		Iterates through the list `lst` and applies the function `f` to each
//		node's content, and creates a new list resulting of the successive
//		applications of the function `f`. The `del` function is used to delete
//		the content o fa node if needed.
//
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_link;
	void 	*mapped_content;

	new_list = NULL;
	while (lst)
	{
		mapped_content = f(lst->content);
		new_link = ft_lstnew(mapped_content);
		if (!new_link)
		{
			del(mapped_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_link);
		lst = lst->next;
	}
	return (new_list);
}
