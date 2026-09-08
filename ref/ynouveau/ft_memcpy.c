/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:39:59 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:48:08 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		*ft_memcpy(void *dest, const void *src, size_t n);
//
//	Parameters:
// -----------
//		dest: Pointer to the destination where the `src` should be copied to.
//		src: Pointer to the source to copy from.
//		n: The amount of bytes to write from `src` to `dest`.
//
//	Returns:
//	--------
//		The pointer to dest.
//
//	Description:
//	------------
//		Copies `n` bytes from the memory area `src` to memory area `dest`. The
//		memory areas must not overlap.
//
//		Use ft_memmove if the memory areas do overlap.
//
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dest_ptr = dest;
	src_ptr = src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
