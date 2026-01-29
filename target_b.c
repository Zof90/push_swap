/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:01:32 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 17:34:52 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*target_b(t_node *lst, int nb)
{
	t_node	*tmp;

	tmp = is_smaller_nb(lst, nb);
	if (!tmp)
		return (find_max(lst));
	while (lst)
	{
		if (lst->nbr > tmp->nbr && nb > lst->nbr)
			tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}
