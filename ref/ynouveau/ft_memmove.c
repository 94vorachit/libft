/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:05:47 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:47:07 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_forward(
				unsigned char *pdest, const unsigned char *psrc, size_t n);
static void	copy_backward(
				unsigned char *pdest, const unsigned char *psrc, size_t n);

//	Prototype:
// ----------
// 		void	*ft_memmove(void *dest, const void *src, size_t n);
//
//	Parameters:
// -----------
// 		dest: Pointer to the destination memory area. 
// 		src: Pointer to the source memory area.
// 		n: Number of bytes to move from `dest` to `src`
//
//	Returns:
//	--------
//		A pointer to `dest`
//
//	Description:
//	------------
//		The ft_memmove() function copies `n` bytes from the memory area `src` to
//		memory area `dest`. The memory areas may overlap: copying takes place as
//		though the bytes in `src` are first copied into a temporary array that
//		does not overlap `src` or `dest`, and the bytes are then copied from the
//		temporary array to `dest`.
//
//		At least that's how it should be. Here no temporary arrays are used,
//		the copy can be done even when there are overlaps.
//
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = dest;
	psrc = src;
	if (n > 0)
	{
		if (pdest < psrc)
			copy_forward(pdest, psrc, n);
		else if (pdest > psrc)
			copy_backward(pdest, psrc, n);
	}
	return (dest);
}

static void	copy_forward(
		unsigned char *pdest, const unsigned char *psrc, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
}

static void	copy_backward(
		unsigned char *pdest, const unsigned char *psrc, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		i--;
		pdest[i] = psrc[i];
	}
}
