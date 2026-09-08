/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 13:48:54 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 09:37:37 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Prototype:
// ----------
//		void *ft_calloc(size_t nmemb, size_t size);
//
//	Parameters:
// -----------
//		nmemb: number of elements to allocate for.
//		size: size of the elements to allocate for.
//
//	Returns:
//	--------
//		None
//
//	Description:
//	------------
//		Allocates memory for an array of `nmemb` elements of `size` bytes each
//		and returns a pointer to the allocated memory.
//
//		The memory is set to 0.
//		
//		If nmemb or size is 0, then ft_calloc returns a unique pointer value
//		that can be successfully passed to free().
//
//		If the multiplication of `nmemb` and `size` would result in an integer
//		overflow, then calloc returns an error, i.e: NULL in this case.
//		By contrast to malloc where this error would not be detected.
//
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	else if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
