/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:32:46 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 22:14:58 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_node **stack_a, t_node **stack_b)
{
	char	c;

	c = 'b';
	while (*stack_a)
	{
		refresh_stack_b(*stack_a, *stack_b);
		prep_stack(stack_a, stack_b, c);
		if (!(*stack_a)->next)
		{
			push(stack_a, stack_b, 'a');
			*stack_a = NULL;
		}
		else
			push(stack_a, stack_b, 'a');
	}
}
