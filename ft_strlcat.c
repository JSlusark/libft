/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:20 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 16:27:36 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	d_i;
	size_t	s_i;

	d_i = 0;
	s_i = 0;

	while(dst[d_i] && d_i < dst_size)
		d_i++;
	while ((src[s_i] != '\0') && ((d_i + s_i + 1) < dst_size))
	{
		dst[d_i + s_i] = src[s_i];
		s_i++;
	}
	if (d_i != dst_size)
		dst[d_i + s_i] = '\0';
	return (d_i + ft_strlen(src));
}
/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	// char dest1[11] = "a";
	char dest[11] = "a";

	// printf("original: %d \n", strlcat(dest1, "lorem", 15));
	// printf("mine: %zu \n", ft_strlcat(dest, "lorem ipsum", 15)); // 11
	// printf("mine: %zu \n", ft_strlcat(dest, "lorem", 15)); //15
} */
