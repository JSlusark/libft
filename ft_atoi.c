/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:47:49 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/01 16:49:36 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		num;
	int		sign;
	size_t	i;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
/* #include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%d\n", ft_atoi("   500")); //0
	printf("%d\n", atoi("   500")); //0
	printf("%d\n", ft_atoi("+-2093 abdd")); //0
	printf("%d\n", atoi("+-2093 abdd")); //0
	printf("%d\n", ft_atoi("abc600")); //
	printf("%d\n", atoi("abc600")); //
	printf("%d\n", ft_atoi(" -9")); //
	printf("%d\n", atoi(" -9")); //
	printf("%d\n", ft_atoi("-- 789")); //
	printf("%d\n", atoi("-- 789")); //

	// notes : i used size_t for i because it's usually used for indexing and loops,
	// it's an unsigned type also, represents the size of any object which might
	// be good when handling long indexes
	// ontinuing to use size_t can help maintain consistency if using it through the rest of the lib

} //ok */
