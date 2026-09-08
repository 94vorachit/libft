/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 07:15:08 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 10:38:19 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n);

//	Prototype:
// ----------
//		char	*ft_itoa(int n);
//
//	Parameters:
// -----------
//		n: The integer to convert
//
//	Returns:
//	--------
//		The string representing the integer. NULL if the allocation fails.
//
//	Description:
//	------------
//		Allocates memory (using malloc(3)) and returns a string representing the
//		integer received as an argument. Negative numbers must be handled.
//
char	*ft_itoa(int n)
{
	char	*output;
	long	nb;
	int		n_len;
	int		i;

	nb = n;
	n_len = get_int_len(n);
	output = malloc(n_len + 1);
	if (!output)
		return (NULL);
	output[n_len] = '\0';
	i = 0;
	if (nb < 0)
	{
		output[i++] = '-';
		nb = -nb;
	}
	while (n_len > i)
	{
		output[--n_len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (output);
}

static int	get_int_len(int n)
{
	int		out;
	long	nb;

	nb = n;
	out = 1;
	if (nb < 0)
	{
		out++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb /= 10;
		out++;
	}
	return (out);
}
