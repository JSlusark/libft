/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:11 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 11:33:59 by jslusark         ###   ########.fr       */
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

	i = n;

	if (dest < src)
		return (memcpy(dest, src, n));

	if (dest > src)
	{
	// need to check below what it does cause confused from the copy result
	//starts copying from the last index (n-1) to the first index (0),
	//ensuring that no source data is corrupted during the copy process
		while (i--)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	*ft_memmove();
} */
