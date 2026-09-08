/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:30:20 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:01:30 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		int	ft_isalnum(int c);
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
//		Checks for an alphanumeric character.
//
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
