/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 20:17:36 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:26:27 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_extract_last(t_node **lst)
{
	t_node	*tmp;
	t_node	*last;

	last = *lst;
	while (last->next)
		last = last->next;
	tmp = last->prev;
	tmp->next = NULL;
	last->prev = NULL;
	return (last);
}
