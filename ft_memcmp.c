/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:37 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/29 21:22:02 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//its like strcmp
/*  The memcmp() function compares the first n bytes
       (each interpreted as unsigned char) of the  mem‐
       ory areas s1 and s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	// we store the s1 and s2 in variables because they are const and can't be modified
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if(*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}

	return (0);
}

