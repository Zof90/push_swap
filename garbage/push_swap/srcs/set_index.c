/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:37:27 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:35:31 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_node *lst)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
	tmp = lst;
	while (tmp)
	{
		tmp->index_max = i;
		tmp = tmp->next;
	}
}
