/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:52:36 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/26 14:29:20 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int type)
{
	if (type >= 'a' && type <= 'z')
	{
		return (type - 32);
	}
	return (type);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_tolower('a')); //A
	printf("%c\n", ft_tolower('b')); //B
	printf("%c\n", ft_tolower('y')); //Y
	printf("%c\n", ft_tolower('x')); //X
	printf("%c\n", ft_tolower('z')); //Z
} //ok
*/
