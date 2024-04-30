/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:11:26 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/30 10:15:43 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//save for later
#include "libft.h"
size_t	count_nbrs(int n)
{
	unsigned int	count;
	count = 1;
	while(n /=10)
		count++;

	return(count);
}

#include <stdio.h>
char	*ft_itoa(int n)
{
	char	digit;
	size_t	len;
	size_t	i;
	len = count_nbrs(n);
	i = 0;
	// if (n > 10 )
	// {

	// }
	while( i <= len )
	{
		digit[i] = (n % 10) + '\0';
	}
	printf("%zu \n", len);
	return (digit); // wrong
}
int	main(void)
{
	printf("%s", ft_itoa(100));
}
