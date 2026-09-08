/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynouveau <ynouveau@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:48:53 by ynouveau          #+#    #+#             */
/*   Updated: 2026/08/31 07:49:40 by ynouveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
static int	word_len(char const *s, char c);
static char	**free_split(char **split, int count);

//	Prototype:
// ----------
// 		char	**ft_split(char const *s, char c);
//
//	Parameters:
// -----------
//		s: The string to be split.
//		c: The delimiter character.
//
//	Returns:
//	--------
//		The array of new strings resulting from the split.
//		
//		NULL if any allocation fails.
//
//		The returned structure will be released using:
//			1) free() on each string in the array;
//			2) free() on the array itself.
//
//	Description:
//	------------
//		Allocates memory (using malloc(3)) and returns an array of strings
//		obtained by splitting `s` using the character `c` as a delimiter.
//
//		Each string in the returned array is allocated independently.
//
//		The array of pointers itself is also allocated dynamically.
//
//		The returned array must be NULL terminated.
//
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;
	int		len;

	words = count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = word_len(s, c);
		result[i] = ft_substr(s, 0, len);
		if (!result[i])
			return (free_split(result, i));
		i++;
		s += len;
	}
	result[i] = NULL;
	return (result);
}

// Counts the number of words, delimited by `c`, in `s`.
static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

// Counts the number of characters in `s` until `c` delimiter.
static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

// Frees every string inside `split` then the `split` array itself.
// This only returns (NULL) because ft_split didnt have
// enough lines left... :D
static char	**free_split(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}
