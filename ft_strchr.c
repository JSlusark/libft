/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:18 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/01 23:12:41 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    // Ensure c is converted properly if higher than 255
	c = (unsigned char)c;

    // Loop condition changed to keep checking until we find 'c' or end the string
	while (*s != c)
	{
		if (*s == '\0')
			return NULL;  // If we reach the end, return NULL
		s++;
	}
	return ((char *)s);  // Return the pointer to 'c' (could be '\0')
}
/* #include<stdio.h>
int	main(void)
{
	printf("%s\n", ft_strchr("teste",'e'));
	printf("%s\n", ft_strchr("teste", '\0'));
	printf("%s\n", ft_strchr("pepe y cparlos",'c'));
} */