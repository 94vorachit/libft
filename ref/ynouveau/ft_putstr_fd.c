/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 16:38:24 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:24 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void ft_putstr_fd(char *s, int fd);
//
//	Parameters:
// -----------
//		s: The string to output.
//		fd: The file descriptor on which to write.
//
//	Returns:
//	--------
//		None
//
//	Description:
//	------------
//		Outputs the string 's' to the specified file descriptor.
//
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}
