/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 09:53:37 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:27:27 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void	ft_lstadd_front(t_list **lst, t_list *new);
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
//		Adds the node 'new' at the beginning of the list.
//
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
