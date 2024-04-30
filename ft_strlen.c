/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:27 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 17:41:29 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
sizet comes from stdlib - need to import it in my libft.h
size t is an unsigned integer and it's safer to use than int
because it will handle and store the maximum size
of any type of object
*/
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%zu\n", ft_strlen("123456")); //6
	printf("%zu\n", ft_strlen("123")); //3
	printf("%zu\n", ft_strlen("Hello World")); //11
	printf("%zu\n", ft_strlen("/&90hsb\'s^-")); //11
	printf("%zu\n", ft_strlen("X")); //1
} //ok */
