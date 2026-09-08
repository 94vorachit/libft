/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 09:55:34 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:19 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		unsigned int	ft_lstsize(t_list *lst);
//
//	Parameters:
// -----------
//		lst: The beginnning of the list.
//
//	Returns:
//	--------
//		The length of the list.
//
//	Description:
//	------------
//		Counts the number of nodes in the list.
//
unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
