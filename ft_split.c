/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:44:06 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/03 18:43:17 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			count++; // we are in a word therefore we count it
		}
		if (*s == c)
			is_word = 0; // we are no longer in a word
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		words;
	char		**result;
	const char	*start;
	size_t		w_i;
	size_t		w_len;

	words = count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	w_i = 0;
	if (!result) // if allocation fails
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			w_len = s - start; // s pointer and start pointer provide the len of the word
			result[w_i] = malloc(sizeof(char) * (w_len + 1));
			if (!result[w_i])
			{
				while (w_i > 0)
					free(result[--w_i]);
				free(result);
				return (NULL);
			}
			ft_strlcpy(result[w_i], start, w_len + 1);
			w_i++;
		}
		else
		{
			s++;
		}
	}
	result[w_i] = '\0';
	return (result);
}

// int main(void) {
//     char **returned = ft_split("let, me, pass, this", ',');
//     if (returned) {
//         for (char **p = returned; *p; p++) {
//             printf("%s\n", *p);
//             free(*p); // Remember to free memory
//         }
//         free(returned);
//     }
//     return 0;
// }
