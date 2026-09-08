/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:58:30 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:19:38 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Prototype:
// ----------
//		void	ft_toupper(int c);
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
//		If c is a lowercase letter, ft_toupper() returns its uppercase
//		equivalent, if an uppercase representation exists in the current locale.
//		Otherwise it returns c.
//

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}
