/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:05:56 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 07:46:35 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		char	*ft_strrchr(const char *s, int c);
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
//		Returns a pointer to the last occurence of the character `c` in the
//		string `s`.
//
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}
