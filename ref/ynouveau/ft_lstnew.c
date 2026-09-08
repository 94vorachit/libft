/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 09:49:39 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:19 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		t_list	*ft_lstnew(void *content);
//
//	Parameters:
// -----------
//		content: The content to store in the new node.
//
//	Returns:
//	--------
//		A pointer to the new node.
//
//	Description:
//	------------
//		Allocates memory (using malloc(3)) and returns a new node. The `content`
//		member variable is initialized with the given parameter `content`. The
//		variable `next` is initialized to NULL.
//
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
