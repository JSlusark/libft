/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:47:49 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 17:17:52 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	sign_appearance;

	num = 0;
	sign = 1;
	sign_appearance = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+' )
	{
		if (*str == '-')
			sign = -1;
		str++;
		sign_appearance++;
	}
	if (sign_appearance > 1)
		return (0);
	while (ft_isdigit(*str))
	{
		num = (num * 10) + (*str - '0');
		str++;
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
} //ok */
