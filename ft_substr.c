/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:18:26 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/29 14:27:23 by jslusark         ###   ########.fr       */
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
	s_len = strlen(s); //remove and use my strlen
	sub = (char*)malloc(sizeof(s) * len + 1); // why should it be like this???
	i = 0;
	if (s_len <= len)
		return (strdup("")); //check if correct, strdup fails franci
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
