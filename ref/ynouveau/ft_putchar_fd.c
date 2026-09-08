/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 16:37:23 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/30 17:47:22 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void ft_putchar_fd(char c, int fd);
//
//	Parameters:
// -----------
//		c: The character to output.
//		fd: The file descriptor on which to write.
//
//	Returns:
//	--------
//		None
//
//	Description:
//	------------
//		Outputs the character 'c' to the specified file descriptor.
//
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// // Quick test and usage example 
// int	main(void)
// {
// 	char c;
// 	int fd;
// 
// 	c = '%';
// 	fd = 1;
// 	ft_putchar_fd(c, fd);
// 	return (0);
// }
