/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:19 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/02 09:41:14 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*stored_s;

	i = 0;
	stored_s = (const unsigned char *)s;
	while (i < n)
	{
		if (stored_s[i] == (unsigned char )c)
			return ((void *)&stored_s[i]);
		i++;
	}
	return (0);
}
