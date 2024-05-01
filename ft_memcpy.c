/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:40 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/01 21:19:46 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;

	if (!dest && !src)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}
/* #include <stdio.h>
int main(void)
{
	char	string1[10] = "aaaaaaaaaa";
	char	string2[10] = "bbbbbbbbbb";
	printf("%s\n", (char*)ft_memcpy(string1, string2, 5));
	printf("%s\n", (char*)memcpy(string1, string2, 5));

	char dest[30] = "DataCycle";
	char src[30] = "CyclicSourceData";
	printf("%s\n", (char*)ft_memcpy(dest, src, 15));
	printf("%s\n", (char*)ft_memcpy(src, dest, 15));
	// printf("%s\n", (char*)memcpy(dest, src, 15));
	// printf("%s\n", (char*)memcpy(src, dest, 15));
} */
/*
we have to copy each 1byte from src to dst
does not treat overlaps, which is
memmove's job
was thinking to use strlcpy but memcpy
does not add null terminators as
we are handling data here
OVERLAPPING IS NOT OVERFLOW - https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c
*/
