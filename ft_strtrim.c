/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:43:56 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/01 21:22:25 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chara_is_found(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*trimmed;

	start = 0;
	end = ft_strlen(s1);
	trimmed = "";

	while (s1[start] && chara_is_found(s1[start], set))
		start++;

	while (s1[end - 1] && chara_is_found(s1[end - 1], set))
		end--;
	trimmed = (char *)malloc(sizeof(s1) * (end - start) + 1);

	if (!trimmed)
		return (NULL);

	strncpy(trimmed, s1 + start, end - start);
	return (trimmed);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("xxxz  test with x and z and x .  zx  xx z", "z x"));
} */
