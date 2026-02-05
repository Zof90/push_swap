/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:40:30 by schouite          #+#    #+#             */
/*   Updated: 2026/01/29 22:44:29 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_max(t_node *lst)
{
	t_node	*tmp;

	tmp = lst;
	while (lst)
	{
		if (lst->nbr > tmp->nbr)
			tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}
