/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:18:26 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/01 21:23:22 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t		s_len;
	size_t		i;
	char		*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	sub = (char*)malloc(sizeof(s) * len + 1);
	i = 0;
	if (s_len <= len)
		return (strdup(""));
	while (i <= len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%s", ft_substr("I am going home", 6, 7));
} */
