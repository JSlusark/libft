/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:25:45 by jslusark          #+#    #+#             */
/*   Updated: 2024/04/23 12:16:46 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int type)
{
	if (type >= '0' && type <= '9')
	{
		return (1);
	}
	return (0);
}
