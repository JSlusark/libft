/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:18:26 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/02 18:42:28 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t s_len;
	size_t i;
	char *sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len) // Check if the start index is beyond the string length
		return (ft_strdup(""));
// Calculate the maximum length it can copy
	size_t max_len = s_len - start;
	if (len > max_len)
		len = max_len; // Reduce len if it exceeds the length of the substring from start
	sub = (char*)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i]) // Ensure not reading past the original string
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0'; // Correctly terminate the string
	return (sub);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%s", ft_substr("I am going home", 6, 7));
} */
