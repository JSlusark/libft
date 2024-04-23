/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:27 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/23 12:21:49 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
sizet comes from stdlib - need to import it in my libft.h
size t is an unsigned integer and it's safer to use than int
because it will handle and store the maximum size
of any type of object
*/
size_t	strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
