/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:59:14 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:21:38 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Prototype:
// ----------
//		void	ft_tolower(int c);
//
//	Parameters:
// -----------
//		c: unsigned char or EOF to be checked
//
//	Returns:
//	--------
//		The value returned is that of the converted letter, or c if the
//		conversation was not possible.
//
//	Description:
//	------------
//		If c is an uppercase letter, ft_tolower() returns its lowercase
//		equivalent, if a lowercase representation exists in the current locale.
//		Otherwise it returns c.
//
int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}
