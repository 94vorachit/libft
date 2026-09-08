/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:00:10 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:15:44 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		size_t	ft_strlen(const char *s);
//
//	Parameters:
// -----------
// 		s: String to count the length of.
//
//	Returns:
//	--------
//		Number of bytes in the string pointed to by `s`.
//
//	Description:
//	------------
//		Calculates the length of the string pointed to by `s`, excluding the
//		terminating null byte ('\0').
//
size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
