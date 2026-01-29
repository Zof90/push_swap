/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 19:17:37 by schouite          #+#    #+#             */
/*   Updated: 2026/01/29 19:27:11 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*algo(t_node **stack_a)
{
	t_node	*stack_b;
	t_node	*last_node;

	stack_b = NULL;
	set_index(*stack_a);
	if ((*stack_a)->index_max == 2)
	{
		if ((*stack_a)->nbr > (*stack_a)->next->nbr)
			swap(stack_a);
	}
	else if ((*stack_a)->index_max == 3)
		three_sort(stack_a);
	else
	{
		fill_stack_b(stack_a, &stack_b);
		fill_stack_a(&stack_b, stack_a);
		last_node = find_min(*stack_a);
		prep_stack_util(stack_a, last_node);
	}
	return (stack_b);
}
