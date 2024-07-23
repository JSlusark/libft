/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:36:34 by jslusark          #+#    #+#             */
/*   Updated: 2024/07/23 16:50:03 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

t_list	*ft_lstlast(t_list *lst)
{
	if (lst->next == NULL)
		return (NULL);

	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
