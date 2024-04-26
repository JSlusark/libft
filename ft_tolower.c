/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:52:25 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/26 14:27:39 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int type)
{
	if (type >= 'A' && type <= 'Z')
	{
		return (type + 32);
	}
	return (type);
}

/* #include <stdio.h>
int	main(void)
{
	printf("FT_TOLOWER\n");
	printf("%c\n", ft_tolower('a')); //a
	printf("%c\n", ft_tolower('b')); //b
	printf("%c\n", ft_tolower('y')); //y
	printf("%c\n", ft_tolower('x')); //x
	printf("%c\n", ft_tolower('z')); //z
}
//ok
 */
