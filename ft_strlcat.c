/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:20 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/22 17:33:50 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcat(char *dst, const char *src, size_t dst_size)
{
    size_t i, j;

    i = 0;
    j = 0;

    while (dst[i] != 0 && i < dst_size)
        i++;

    while (src[j] != 0 && ((i + j) < dst_size - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (i + ft_strlen(src));
}