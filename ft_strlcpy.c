/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:24 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 12:13:45 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen(src);
	i = 0;
	if (dst_size != 0)
	{
		while (src[i] != '\0' && i < dst_size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_size);
}
/* #include <stdio.h>
int	main(void)
{
	printf();
} */
