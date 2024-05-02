/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:15 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/02 11:07:40 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	new_s = s;
	i = 0;
	while (i < n)
	{
		new_s[i] = (unsigned char)c;
		i++;
	}
	return (new_s);
}
/* #include <stdio.h>
int main(void)
{
	char	string[10] = "aaaaaaaaaa";
	printf("%s\n", (char*)ft_memset(string, 38, 7));
	printf("%s\n", (char*)ft_memset(string, 38, 7));

	printf("%s\n", (char*)ft_memset(string, -38, 7));
	printf("%s\n", (char*)ft_memset(string, -38, 7));

	int c = 511; // Example value
    printf("Original: %d, Cast to unsigned char: %u\n", c, (unsigned char)c);
    printf("Original: %d, Cast to char: %u\n", c, (char)c);
    printf("Original: %d, Cast without: %u\n", c, c);

	c = -38; // Example value
    printf("Original: %d, Cast to unsigned char: %u\n", c, (unsigned char)c);
    printf("Original: %d, Cast to char: %u\n", c, (char)c);
    printf("Original: %d, Cast without: %u\n", c, c);
} */

/* fills a spec n of block of memory with 1 byte value (8 bit)
(therefore why we use char*)
decided to use unsigned* instead of *char because it's a safer way
to handle memory operations and avoid that values higner
than 255 or -n be misinterpreted and overflow
making sure that the char byte range is between 0 to 255
prevents portability issues range of possible byte values
it can represent. Since a byte consists of 8 bits,
it can hold values from 0 to 255 (2^8 - 1), inclusive.
Each value within this range corresponds to a unique binary
pattern of 8 bits,ranging from all 0s (representing 0)
to all 1s (representing 255). */
