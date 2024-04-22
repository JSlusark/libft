/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:50 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/22 23:47:01 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    int i;
    const char *ini;

    ini = s;
    i = ft_strlen(s);
    s = (s + i);
    while (*s != *ini && c != *s)
        s--;
    if (c == *s)
        return ((char *)s);
    return (0);
}