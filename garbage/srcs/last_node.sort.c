/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:33:10 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 22:49:53 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	last_node_sort(t_node **stack_a, t_node *node)
{
	char	c;

	c = 'a';
	while (*stack_a != node)
	{
		if (node->above_mediane)
			rotate(stack_a, c);
		else
			reverse_rotate(stack_a, c);
	}
}
