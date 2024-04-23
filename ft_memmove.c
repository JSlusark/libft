/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:11 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/23 16:03:56 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
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
