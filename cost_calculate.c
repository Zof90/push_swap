/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calculate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:42:10 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 19:26:07 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_calculate(t_node *stack_a)
{
	t_node	*target;
	int		push_cost;
	int		cost_a;
	int		cost_b;

	target = stack_a->target_node;
	if (stack_a->above_mediane)
		cost_a = stack_a->index;
	else
		cost_a = (stack_a->index_max - stack_a->index) + 1;
	if (target->above_mediane)
		cost_b = target->index;
	else
		cost_b = (target->index_max - target->index) + 1;
	push_cost = cost_a + cost_b;
	if ((stack_a->above_mediane && target->above_mediane)
		|| !(stack_a->above_mediane || target->above_mediane))
	{
		if (cost_a > cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	return (push_cost);
}
