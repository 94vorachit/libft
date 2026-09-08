/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:05:34 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:37:01 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		int ft_atoi(const char *nptr);
//
//	Parameters:
// -----------
//		nptr: string to parse for integers.
//
//	Returns:
//	--------
//		The converted value or 0 on error.
//
//	Description:
//	------------
//		Converts the initial portion of the string pointed to by nptr to an int.
//		The behavior is the same as strtol(nptr, NULL, 10), except that
//		ft_atoi() does not detect errors. Identical to stdlib.h's atoi.
//
int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (9 <= nptr[i] && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = 10 * result + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
