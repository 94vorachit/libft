/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:51:58 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 08:45:53 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		size_t	ft_strlcat(char *dst, const char *src, size_t size);
//
//	Parameters:
// -----------
// 		dst: Destination string
// 		src: Source string
// 		size: Full size of the buffer
//
//	Returns:
//	--------
//		The total length of the string they tried to create. For ft_strlcpy()
//		that meanst the length of `src`. For ft_strlcat() that means the initial
//		length of `dst` plus the length of `src`. While this may seem somewhat
//		confusing, it was done to make truncation detection simple.
//
//		Note, however, that if ft_strlcat() traverses size characters without
//		finding a NUL, the length of the string is considered to be `size` and
//		the destination string will not be NUL-terminated (since there was no
//		space for the NUL). This keeps ft_strlcat() from running off the end of
//		a string. In practice this should not happen (as it means that either
//		size is incorrect or that `dst` is not a proper "C" string). The check
//		exists to prevent potential security problems in incorrect code.
//
//		
//	Description:
//	------------
//		The ft_strlcpy() and ft_strlcat() functions copy and concatenate strings
//		respectively. They are designed to be safer, more consistent, and less
//		error prone replacements for strncpy(3) and strncat(3). Unlike those
//		functions, ft_strlcpy() and ft_strlcat() take the full size of the
//		buffer (not just the length) and guarantee to NUL-terminate the result
//		(as long as size is larger than 0 or, in the case of ft_strlcat(), as
//		long as there is at least one byte free in `dst`). Note that a byte for
//		the NUL should be included in `size`. Also note that ft_strlcpy() and
//		ft_strlcat() only operate on true "C" strings. This means that for
//		ft_strlcpy() `src` must be NUL-terminated and for ft_strlcat() both
//		`src` and `dst` must be NUL-terminated.
//
//		ft_strlcpy() copies up to `size - 1` characters from the NUL-terminated
//		string `src` to `dst`, NUL-terminating the result.
//
//		ft_strlcat() appends the NUL-terminated string `src` to the end of
//		`dst`. It will append at most `ft_strlen(dst) - 1` bytes,
//		NUL-terminating the result.
//
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	src_len = ft_strlen(src);
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
