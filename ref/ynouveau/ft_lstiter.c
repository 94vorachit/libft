/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:36:12 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:18 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void	ft_lstiter(t_list *lst, void (*f)(void *));
//
//	Parameters:
// -----------
//		lst: The address of a pointer to a node.
//		f: The address of a function to apply to each node's content.
//
//	Returns:
//	--------
//		None	
//
//	Description:
//	------------
//		Iterates through the list `lst` and applies the function `f` to the
//		content of each node.
//
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
