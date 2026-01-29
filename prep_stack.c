/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:38:31 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 18:46:20 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_stack(t_node **stack_a, t_node **stack_b)
{
	t_node	*target;
	t_node	*cheapeast;

	cheapeast = get_cheapeast(*stack_a);
	target = cheapeast->target_node;
	while (cheapeast->prev)
	{
		if (!target->prev)
			prep_stack_util(stack_a, cheapeast);
		while (target->prev)
		{
			if (cheapeast->above_mediane && target->above_mediane)
				double_rotate(stack_a, stack_b);
			else if (!(cheapeast->above_mediane || target->above_mediane))
				double_reverse_rotate(stack_a, stack_b);
		}
	}
	while (target->prev)
		prep_stack_util(stack_b, target);
}
