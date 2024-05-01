/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:50 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/01 23:28:05 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// don't remember this one
char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;
	// Pointer to store the last occurrence
	// Ensure c is converted properly if higher than 255
	c = (unsigned char)c;

    // Loop condition changed to keep checking until we find 'c' or end the string
	while (*s != c)
	{
		if (*s == c)
			last_occurrence = s; // Update last_occurrence when we find c
		s++;
	}
 // Handle the case where c is the null terminator '\0'
	if (c == '\0')
		return ((char *)s);

	return ((char *)last_occurrence);
	// Return the pointer to the last occurrence of 'c'
}
