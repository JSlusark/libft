/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:53:39 by jessica           #+#    #+#             */
/*   Updated: 2024/04/25 12:07:48 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// need to check this better
#ifndef LIBFT_H
# define LIBFT_H

//including libraries used in my functions
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

// need to check on struct better
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}                   t_list;

// do not forget to #include <libft.h> in all files, can be written with "libft.h" if in same root directory
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
//need to write all the other functions

// check link for exp https://www.geeksforgeeks.org/write-header-file-c/

#endif