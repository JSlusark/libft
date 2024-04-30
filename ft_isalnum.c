/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:47:55 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 17:33:53 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int type)
{
	if (ft_isalpha(type) || ft_isdigit(type))
	{
		return (1);
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	printf("y %i\n", ft_isalnum('a'));
	printf("n %i\n", ft_isalnum('/'));
	printf("n %i\n", ft_isalnum('{'));
	printf("y %i\n", ft_isalnum('1'));
	printf("y %i\n", ft_isalnum('9'));
	printf("y %i\n", ft_isalnum('Z'));
	printf("y %i\n", ft_isalnum('z'));
	printf("y %i\n", ft_isalnum('x'));
	printf("y %i\n", ft_isalnum('Y'));
} //ok */
