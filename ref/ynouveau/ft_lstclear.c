/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:31:30 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:30:32 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void	ft_lstclear(t_list **lst, void (*del)(void *));
//
//	Parameters:
// -----------
//		lst: The address of a pointer to a node.
//		del: The address of the function used to delete the content of the node.
//
//	Returns:
//	--------
//		None	
//
//	Description:
//	------------
//		Deletes and frees the given node and all its successors, using the
//		function 'del' and free(3). Finally, set the pointer to the list to
//		NULL.
//
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
