/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:04:58 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:23:02 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		int	ft_strncmp(const char *s1, const char *s2, size_t n);
//
//	Parameters:
// -----------
// 		s1: First string to compare.
// 		s2: Second string to compare.
// 		n: Number of bytes to compare up to.
//
//	Returns:
//	--------
//		Returns an integer less than, equal to, or greater than zero if `s1` (or
//		the first `n` bytes thereof) is found, respectively, to be less than, to
//		match, or be greater than s2.
//
//	Description:
//	------------
//		Compares the two strings `s1` and `s2`. The locale is not taken into
//		account (for a locale-aware comparison, see strcoll(3)).
//
//		The comparison is done using unsigned characters.
//
//		It returns an integer indicating the result of the comparison, as
//		follows:
//		- 0, if `s1` and `s2` are equal;
//		- a negative value if `s1` is less than `s2`;
//		- a positive value if `s1` is greater than `s2`;
//
//		And for ft_strncmp, this comparison is done for the first (at most) `n`
//		bytes of `s1` and `s2`
//
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
