/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:41:14 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 07:37:29 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		char	*ft_strchr(const char *s, int c);
//
//	Parameters:
// -----------
//		s: The string to look into.
//		c: The character to look for.
//
//	Returns:
//	--------
//		A pointer to the matched character, or NULL if the character is not
//		found.
//
//		The terminating null byte is considered part of the string, so that if
//		`c` is specified as '\0', this function returns a pointer to the
//		terminator.
//
//	Description:
//	------------
//		Returns a pointer to the first occurence of the character `c` in the
//		string `s`.
//
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
