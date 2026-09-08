/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 08:28:42 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 08:27:15 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
// 		void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//
//	Parameters:
// -----------
//		s: The string to iterate over.
//		f: The function to apply to each character.
//
//	Returns:
//	--------
//		None
//		
//	Description:
//	------------
//		Applies the function `f` to each character of the string passed as
//		argument, passing its index as the first argument. Each character is
//		passed by address to `f` so it can be modified if necessary.
//
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
