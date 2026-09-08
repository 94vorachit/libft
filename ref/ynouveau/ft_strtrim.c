/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:09:59 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:32:28 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, char const *set);

//	Prototype:
// ----------
// 		char	*ft_strtrim(char const *s1, char const *set);
//
//	Parameters:
// -----------
// 		s1: The string to be trimmed.
// 		set: The string containing the set of characters to be removed.
//
//	Returns:
//	--------
//		The trimmed string.
//
//		NULL if the allocation fails.
//
//	Description:
//	------------
//		Allocates memory (using malloc(3)) and returns a copy of `s1` with
//		characters from `set` removed from the beginning and the end.
//
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && char_in_set(s1[start], set))
		start++;
	while (end > start && char_in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, (unsigned int)start, end - start));
}

// Notes for ft_strtrim
// start = 0, end = ft_strlen(s1)
// While start < end and chars in set
// Increment start
// Then from the end, while end > start and chars in set
// decrement end
// Then make a new substring from start to end
// using ft_substr

static int	char_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
