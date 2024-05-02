/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:47:52 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/02 18:53:49 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* #include <stdio.h>
#include <strings.h>
int main(void)
{
	char	string[10] = "aaaaaaaaaa";
	ft_bzero(string, 7);
	printf("%s\n", string);
	bzero(string, 7);
	printf("%s\n", string);
} */
/* writes 0 to a byte of the string
therefore why we use memset inside*/
