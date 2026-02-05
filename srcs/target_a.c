/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:19:12 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 20:30:23 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*target_a(t_node *lst, int nb)
{
	t_node	*tmp;

	tmp = is_bigger_nb(lst, nb);
	if (!tmp)
		return (find_min(lst));
	while (lst)
	{
		if (lst->nbr < tmp->nbr && nb < lst->nbr)
			tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}
