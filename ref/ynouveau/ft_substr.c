/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:24:50 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:34:24 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		char	*ft_substr(char const *s, unsigned int start, size_t len);
//
//	Parameters:
// -----------
// 		s: The original string from which to create the substring.
// 		start: The starting index of the substring within `s`
// 		len: The maximum length of the substring.
//
//	Returns:
//	--------
//		The substring.
//
//		NULL if the allocation fails.
//
//	Description:
//	------------
//		Allocates memory (using malloc(3)) and returns a substring from the
//		string `s`.
//
//		The substring starts at index `start` and has a maximum length of `len`.
//
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	if (len == 0)
	{
		output[0] = '\0';
		return (output);
	}
	ft_strlcpy(output, s + start, len + 1);
	return (output);
}
