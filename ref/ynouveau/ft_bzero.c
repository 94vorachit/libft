/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:21:58 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 13:15:43 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void ft_bzero(void *s, size_t n);
//
//	Parameters:
// -----------
//		s: Pointer to the start of the bytes to set to zero.
//		n: Number of bytes to set to zero
//
//	Returns:
//	--------
//		None
//
//	Description:
//	------------
//		Erases the date in the n bytes of the memory starting at the location
//		pointed to by 's', writting zeros (bytes containing '\0') to that area.
//
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
