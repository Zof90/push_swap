/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:32:39 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 18:36:42 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_b(t_node **stack_a, t_node **stack_b)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *stack_a;
	while (i < 2 && !is_three_left(*stack_a))
	{
		push(stack_a, stack_b);
		i++;
	}
	while (!is_three_left(*stack_a))
	{
		refresh_stack_a(*stack_a, *stack_b);
		prep_stack(stack_a, stack_b);
		push(stack_a, stack_b);
	}
	three_sort(stack_a);
	set_index(*stack_a);
}
