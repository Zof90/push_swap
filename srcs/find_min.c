/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:28:54 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 16:07:00 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_min(t_node *lst)
{
	t_node	*tmp;

	tmp = lst;
	while (lst)
	{
		if (lst->nbr < tmp->nbr)
			tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}
