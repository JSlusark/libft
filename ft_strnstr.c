/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:32 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/02 14:51:19 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		i;
	int			s_len;
	char		*b;
	char		*l;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	b = (char *)big;
	l = (char *)little;
	s_len = ft_strlen(l);
	while (b[i] != '\0' && (i + s_len) <= n)
	{
		if (ft_strncmp((b + i), l, s_len) == 0)
		{
			return (b + i);
		}
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
//need to recheck
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr = ft_strnstr(largestring, smallstring, 8);
	printf("%s",ptr);
} */
