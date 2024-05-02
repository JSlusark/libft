/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:18 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/02 18:34:38 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/* #include<stdio.h>
int	main(void)
{
	printf("%s\n", ft_strchr("teste",'e'));
	printf("%s\n", ft_strchr("teste", '\0'));
	printf("%s\n", ft_strchr("pepe y cparlos",'c'));
} */
