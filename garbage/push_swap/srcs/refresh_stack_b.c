/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refresh_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:58:54 by schouite          #+#    #+#             */
/*   Updated: 2026/02/01 18:44:12 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	refresh_stack_b(t_node *stack_a, t_node *stack_b)
{
	t_node	*tmp;

	tmp = stack_a;
	while (stack_a)
	{
		stack_a->target_node = target_a(stack_b, stack_a->nbr);
		stack_a->above_mediane = is_above_mediane(stack_a, stack_a->index);
		stack_a->target_node->above_mediane = is_above_mediane(stack_b,
				stack_a->target_node->index);
		stack_a->push_cost = cost_calculate(stack_a);
		stack_a = stack_a->next;
	}
	get_cheapeast(tmp);
}
