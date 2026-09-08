/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:53:15 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:15:04 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Prototype:
// ----------
//		int	ft_isprint(int c);
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
//		Checks for any printable character including space.
//
int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
