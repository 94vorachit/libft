/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:50:16 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:21 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void *ft_memset(void *s, size_t n);
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
//		Fills the first n bytes of the memory area pointed to by s with the
//		constant byte c.
//
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		n--;
		ptr[n] = (unsigned char)c;
	}
	return (s);
}
