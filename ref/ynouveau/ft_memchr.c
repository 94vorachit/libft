/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:14:53 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:20 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		void	*ft_memchr(const void *s, int c, size_t n);
//
//	Parameters:
// -----------
//		s: Pointer to the memory area to start searching from
//		c: The character to look for between `s` and `s + n`
//		n: How many bytes of memory to look for `c` from `s`
//
//	Returns:
//	--------
//		The pointer to the matchin byte or NULL if the character does not occur
//		in the given memory area.
//
//	Description:
//	------------
//		Scans the initial `n` bytes of the memory area pointed to by `s` for the
//		first instance of `c`. Both `c` ad the bytes of the memory area pointed
//		to by `s` are interpreted as unsigned char.
//
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ps;
	size_t				i;

	i = 0;
	ps = s;
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
			return ((void *)&ps[i]);
		i++;
	}
	return (NULL);
}
