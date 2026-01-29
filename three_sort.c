/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:59:02 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:35:51 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_node **lst)
{
	t_node	*tmp;

	tmp = find_max(*lst);
	while (tmp->next)
	{
		if (tmp->above_mediane)
			rotate(lst);
		else
			reverse_rotate(lst);
	}
	if ((*lst)->nbr > (*lst)->next->nbr)
		swap(lst);
}
