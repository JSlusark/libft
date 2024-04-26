/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:53:39 by jessica           #+#    #+#             */
/*   Updated: 2024/04/25 18:18:03 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// need to check this better
#ifndef LIBFT_H
# define LIBFT_H

//including libraries used in my functions
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

// we use this struct in the next functions (batch 2 that operates with lists)
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}                   t_list;

// do not forget to #include <libft.h> in all files, can be written with "libft.h" if in same root directory
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*memchr(const void *s, int c, size_t n);
int					memcmp(const void *s1, const void *s2, size_t n);
void				*memcpy(void *dest, const void *src, size_t n);
void				*memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(char *src);
size_t				ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t				ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t				ft_strlen(char *str);
int					ft_strcmp(char *str1, char *str2, size_t n);
char				*ft_strnstr(const char *big, const char *little, size_t len);
char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int type);
int					ft_tolower(int type);

//need to write all the other functions

// check link for exp https://www.geeksforgeeks.org/write-header-file-c/

#endif
