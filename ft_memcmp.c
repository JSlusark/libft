/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:37 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/23 17:10:41 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//its like strcmp
/*  The memcmp() function compares the first n bytes
       (each interpreted as unsigned char) of the  mem‐
       ory areas s1 and s2.
 */
int	memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	if(n = 0)
		return(0);
	while (i < n)
	{
		if( s1[i] =! s2[i])
			return (((unsigned char)s1)[i] - ((unsigned char)s2)[i]);
			i++;
	}

	return (0);
}

