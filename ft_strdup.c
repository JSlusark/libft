/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:59:20 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/01 22:46:01 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*duplicate;

	duplicate = (char *)malloc(ft_strlen(src) + 1);
	if (!duplicate)
		return (0);
	ft_memcpy(duplicate, src, ft_strlen(src) + 1);
	return (duplicate);
}
/*  The strdup() function allocates sufficient
memory for a copy of the string s1,
does the copy, and returns a pointer to it.
The pointer may subsequently be used as an
argument to the function free(3).
If insufficient memory is available, NULL is
returned and errno is set to ENOMEM.
The strndup() function copies at most n characters
from the string s1 always NUL terminating the copied string. */

// char	*ft_strdup(char *src)
// {
// 	char	*duplicate;
// 	int		i;

// 	i = 0;
// 	duplicate = malloc(sizeof(*src));
// 	if (duplicate == NULL)
// 	{
// 		return (NULL);
// 	}
// 	while (src[i] != '\0')
// 	{
// 		duplicate[i] = src[i];
// 		i++;
// 	}
// 	duplicate[i] = '\0';
// 	return (duplicate);
// }
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
}*/
