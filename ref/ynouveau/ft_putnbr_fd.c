/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 07:41:46 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:24 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void ft_putnbr_fd(int n, int fd);
//
//	Parameters:
// -----------
//		n: The integer to output.
//		fd: The file descriptor on which to write.
//
//	Returns:
//	--------
//		None
//
//	Description:
//	------------
//		Outputs the integer 'n' to the specified file descriptor.
//
void	ft_putnbr_fd(int n, int fd)
{
	char	*n_str;

	n_str = ft_itoa(n);
	ft_putstr_fd(n_str, fd);
	free(n_str);
}
