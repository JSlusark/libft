/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:42:25 by jslusark          #+#    #+#             */
/*   Updated: 2024/07/24 13:41:20 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
 // completely wrong
	t_list	*next;

	while (lst != NULL)
	{
		next = lst->next;
		f(lst->content);
		lst = lst->next;
	}
	del(lst);
	return(lst);
}
