/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:42:32 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 08:32:26 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		char	*ft_strjoin(char const *s1, char const *s2);
//
//	Parameters:
// -----------
//		s1: The prefix string.
//		s2: The suffix string.
//
//	Returns:
//	--------
//		The new string.
//
//		NULL if the allocation fails.
//		
//	Description:
//	------------
//		Allocates memory (using malloc(3)) and returns a new string, which is
//		the result of concatenating `s1` and `s2`
//
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	output = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!output)
		return (NULL);
	result = output;
	while (*s1)
		*output++ = *s1++;
	while (*s2)
		*output++ = *s2++;
	*output = '\0';
	return (result);
}
