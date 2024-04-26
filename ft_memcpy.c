/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:40 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/25 14:42:48 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned const char *) src;

	// there typically isn't a check for null pointers because the behavior of memcpy when given null pointers is undefined by the C standard.
	//This means that it is the responsibility of the caller to ensure that valid pointers are passed to the function.
	if (!dest || !src)
	{
		return (0);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
		//can i actually use strcpy() here?
	}

	return (dest);
}

/*
why we use char and not int?
char is guaranteed to be 1 byte in size.
This makes it the ideal choice for byte-level operations where you
need to handle data one byte at a time.
essential for accurately copying arbitrary data (like binary data, structs, arrays, etc.)
from one memory location to another without error or misalignment
char * does not interpret the data; it simply moves data from one location to another
Using char * ensures that the memcpy function copies exactly one byte at a time, which is essential for
accurately copying arbitrary data (like binary data, structs, arrays, etc.
unsigned, making it suitable for binary data handling where sign bits might cause issues
*/
