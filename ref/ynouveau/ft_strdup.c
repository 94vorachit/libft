/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 13:48:23 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 08:00:41 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		char	*ft_strdup(const char *s);
//
//	Parameters:
// -----------
//		s: The string to duplicate.
//
//	Returns:
//	--------
//		On success, returns a pointer to the duplicated string.
//
//		It returns NULL if insufficient memory was available, with errno set to
//		indicate the cause of the error. But we don't have errno so NULL it is.
//		
//	Description:
//	------------
//		Returns a pointer to a new string which is a duplicate of the string
//		`s`. Memory for the new string is obtained with malloc(3), and can be
//		freed with free(3).
//
char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	i;
	char	*dup;

	s_len = ft_strlen(s);
	dup = (char *)malloc((s_len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
