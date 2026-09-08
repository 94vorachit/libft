/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:02:52 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:26:40 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void	ft_lstadd_back(t_list **lst, t_list *new);
//
//	Parameters:
// -----------
//		lst: The address of a pointer to the first node of a list.
//		new: The address of a pointer to the node to be added.
//
//	Returns:
//	--------
//		None	
//
//	Description:
//	------------
//		Adds the node 'new' at the end of the list.
//
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
