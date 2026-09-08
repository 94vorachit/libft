/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:12:42 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:12:17 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Prototype:
// ----------
//		int	ft_isdigit(int c);
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
//		Checks for a digit (0 through 9).
//
int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
