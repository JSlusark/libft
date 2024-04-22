/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:29 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/22 17:34:39 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *str1, char *str2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (str1[i] != '\0' && str1[i] == str2[i] && i < n - 1)
    {
        i++;
    }
    /*
    unsigned char is use to further avoid complications when returning a number from a character
    */
    return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}