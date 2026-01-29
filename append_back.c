/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:10:35 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:24:26 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	append_nd_back(t_node **lst, t_node *new)
{
	t_node	*tmp;

	if (!*lst)
	{
		*lst = new;
		return (true);
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (true);
}
