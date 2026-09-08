/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:10:34 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 15:05:34 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 'a' == 97, 'z' == 122
static int	ft_islower(int c)
{
	return (97 <= c && c <= 122);
}

// 'A' == 65, 'Z' == 90
static int	ft_isupper(int c)
{
	return (65 <= c && c <= 90);
}

//	Prototype:
// ----------
//		int	ft_isalpha(int c);
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
//		Checks for an alphabetic character; in the standard "C" locale.
//
//		It is equivalent to `ft_islower(c) || ft_isupper(c)`. In some locales,
//		there may be additional characters for which ft_isalpha is true-letters
//		which are neither uppercase nor lowercase.
//
//		Note: no we are not checking for any kind of locales outside of the
//		standard "C" one. I'm not remaking a local/character-classification
//		subsystem for the sake of ft_isalpha :P Also I don't know how to test
//		for it and I'm pretty sure we don't have access to the functions that
//		would make this decent.
//		The proper explanation for this would probably be that the functions
//		without the "_l" suffix perform checks based on the current locale.
//
int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
