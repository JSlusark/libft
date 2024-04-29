/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:43:46 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/29 15:07:03 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // PASSES

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*together;
	unsigned int	total_size;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	total_size = strlen(s1) + strlen(s2);
	together = (char *)malloc(sizeof(char) * total_size + 1);
	if(!together)
		return (NULL);
	while (s1[i] != '\0')
	{
		together[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		together[j] = s2[i];
		i++;
		j++;
	}
	together[j] = '\0';
	return (together);
}
// #include <stdio.h>
// int	main(void)
// {
// 	ft_strjoin("Ciao", "bella!");
// }
