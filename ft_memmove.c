/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:11 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/02 10:54:12 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The memmove() function copies n bytes from memory
area src to memory area dest.
The memory areas may overlap: copying takes place as though the
bytes in src are first copied into a
temporary array that does not overlap src or dest, and the bytes are then
copied from the temporary array to dest. */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/* #include <stdio.h>
int main(void)
{
	char	string1[10] = "aaaaaaaaaa";
	char	string2[10] = "bbbbbbbbbb";
	printf("%s\n", (char*)ft_memmove(string1, string2, 5));
	printf("%s\n", (char*)memmove(string1, string2, 5));

char buffer[30] = "HelloWorld";

	// printf("%s\n", (char*)memcpy(buffer + 5, buffer, 10)); //helloworlo
	// printf("%s\n", (char*)memmove(buffer + 5, buffer, 10)); //helloworld
	// printf("%s\n", (char*)ft_memcpy(buffer + 5, buffer, 10)); //hellohello
	// printf("%s\n", (char*)ft_memmove(buffer + 5, buffer, 10)); //helloworld

} */
/*
if dest< src it avoids overwriting the source before it is read by using memcpy
is dest>src we have to copy bytes from the end so that we can avoid overlaps
and corrupting the copied data
 */
