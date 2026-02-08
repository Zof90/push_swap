/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:59:02 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 22:53:30 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_node **lst)
{
	t_node	*tmp;
	t_node	*last;
	char	c;

	c = 'a';
	tmp = find_max(*lst);
	while (tmp->next)
	{
		if (tmp->above_mediane)
			rotate(lst, c);
		else
			reverse_rotate(lst, c);
	}
	if ((*lst)->nbr > (*lst)->next->nbr)
	{
		swap(lst, c);
		tmp = (*lst)->next;
		last = ft_lstlast(*lst);
		last->prev = tmp;
	}
}
