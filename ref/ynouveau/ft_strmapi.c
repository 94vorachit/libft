/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 08:28:39 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 08:29:47 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//
//	Parameters:
// -----------
//		s: The string to iterate over.
//		f: The function to apply to each character.
//
//	Returns:
//	--------
//		The string created from the successive applications of `f`.
//
//		Returns NULL if the allocation fails.
//		
//	Description:
//	------------
//		Applies the function `f` to each character of the string passed as
//		argument, passing its index as the first argument and the character
//		itself as the second A new string is created (using malloc(3)) to store
//		the result from the successive applications of `f`.
//
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*output;

	output = ft_strdup(s);
	if (!output)
		return (NULL);
	i = 0;
	while (s[i])
	{
		output[i] = f(i, s[i]);
		i++;
	}
	return (output);
}
