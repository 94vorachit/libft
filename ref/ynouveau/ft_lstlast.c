/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 09:57:39 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 16:48:29 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		t_list	*ft_lstlast(t_list *lst)
//
//	Parameters:
// -----------
//		lst: The beginning of the list.
//
//	Returns:
//	--------
//		Last node of the list
//
//	Description:
//	------------
//		Returns the last node of the list. 
//
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return lst;
}
