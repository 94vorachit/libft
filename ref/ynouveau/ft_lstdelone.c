/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:06:46 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 16:42:25 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void	ft_lstdelone(t_list *lst, void (*del)(void *))
//
//	Parameters:
// -----------
//		lst: The node to free
//		del: The address of the function used to delete the content of the node.
//
//	Returns:
//	--------
//		None	
//
//	Description:
//	------------
//		Takes a node as parameter and frees its content using the function
//		`del`. Free the node itself but does NOT free the next node.
//
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
