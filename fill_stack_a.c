/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:32:46 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 20:27:56 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_node **stack_a, t_node **stack_b)
{
	while (*stack_a)
	{
		refresh_stack_b(*stack_a, *stack_b);
		prep_stack(stack_a, stack_b);
		if (!(*stack_a)->next)
		{
			push(stack_a, stack_b);
			*stack_a = NULL;
		}
		else
			push(stack_a, stack_b);
	}
}
