/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:52:21 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:11:35 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Prototype:
// ----------
//		int	ft_isascii(int c);
//
//	Parameters:
// -----------
//		c: unsigned char or EOF to be checked
//
//	Returns:
//	--------
//		The value returned are nonzero if the character c falls into the tested
//		class, and zero if not.
//
//	Description:
//	------------
//		Checks whether c is a 7-bit unsigned char value that fits into the ASCII
//		character set.
//
int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
