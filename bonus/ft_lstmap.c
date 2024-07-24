/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:42:25 by jslusark          #+#    #+#             */
/*   Updated: 2024/07/24 15:13:35 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*next_node;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (0);
	new_list = 0;
	while (lst)
	{
		next_node = ft_lstnew(f(lst->content));
		if (!next_node)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, next_node);
		lst = lst->next;
	}
	return (new_list);
}
