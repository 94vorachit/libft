/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:50:20 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:15 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		int	ft_memcmp(const void *s1, const void *s2, size_t n);
//
//	Parameters:
// -----------
//		s1: First pointer to compare from
//		s2: Second pointer to compare from
//		n: Number bytes to compare
//
//	Returns:
//	--------
//		An integer less than, equal to, or greater than zero if the first `n`
//		bytes of `s1` is found, respectively, to be less than, to match, or be
//		greater than the first n bytes of s2.
//
//		For a nonzero return value, the sign is determined by the sign of the
//		difference between the first pair of bytes (interpreted as unsigned
//		char) that differ in s1 and s2.
//
//		If n is zero, the return value is zero.
//
//	Description:
//	------------
//		Compares the first n bytes (each interpreted as unsigned char) of the
//		memory areas s1 and s2.
//
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;
	size_t				i;

	ps1 = s1;
	ps2 = s2;
	i = 0;
	while (i < n && ps1[i] == ps2[i])
		i++;
	if (i == n)
		return (0);
	return (ps1[i] - ps2[i]);
}
