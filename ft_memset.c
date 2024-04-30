/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:15 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 18:05:54 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/* #include <stdio.h>
int main(void)
{
	char	string[10] = "aaaaaaaaaa";
	printf("%s", (char*)ft_memset(string, 69, 7));
	// printf("%s", (char*)memset(string, 69, 7));
} */
