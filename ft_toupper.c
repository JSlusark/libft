/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:52:36 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 16:49:06 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int type)
{
	if (type >= 'a' && type <= 'z')
	{
		return (type - 32);
	}
	return (type);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('a')); //A
	printf("%c\n", ft_toupper('b')); //B
	printf("%c\n", ft_toupper('y')); //Y
	printf("%c\n", ft_toupper('x')); //X
	printf("%c\n", ft_toupper('z')); //Z
}*/
