/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:05:27 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:28:18 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		char	*ft_strnstr(const char *big, const char *little, size_t len);
//
//	Parameters:
// -----------
// 		big: String to search for `little` in.
// 		little: String to find in `big`.
// 		len: Number of characters to search for `little` in `big`.
//
//	Returns:
//	--------
//		If `little` is an empty string, `big` is returned; if `little` occurs
//		nowhere in `big`, NULL is returned; otherwise a pointer to the first
//		character of the first occurence of `little` is returned.
//
//	Description:
//	------------
//		Locates the first occurence of the null-terminated string `little` in
//		the string `big`, where not more than `len` characters are searched.
//		Characters that appear after a '\0' are not searched. Since the
//		ft_strnstr() function is from the FreeBSD specific API, it should only
//		be used when portability is not a concern.
//
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	lil_i;

	if (little[0] == '\0')
		return ((char *) big);
	big_i = 0;
	while (big[big_i] && big_i < len)
	{
		lil_i = 0;
		while (little[lil_i] && big_i + lil_i < len
			&& big[big_i + lil_i] == little[lil_i])
			lil_i++;
		if (little[lil_i] == '\0')
			return ((char *)&big[big_i]);
		big_i++;
	}
	return (NULL);
}
