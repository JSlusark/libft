/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:47:49 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/26 16:57:26 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	while (*str == '-' || *str == '+' )
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
/* #include <stdio.h>
int	main(void)
{
	printf("FT_ATOI\n");
	printf("%d\n", ft_atoi("---500")); //a
	printf("%d\n", ft_atoi("+++2093 abdd")); //b
	printf("%d\n", ft_atoi("abdd+-600")); //y
	printf("%d\n", ft_atoi("    9")); //x
	printf("%d\n", ft_atoi("-- 789")); //z
} //ok
 */

