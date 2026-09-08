/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 16:39:41 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:38:35 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void ft_putendl_fd(char *s, int fd);
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
//		Outputs the string 's' to the specified file descriptor, followed by a
//		newline.
//
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
