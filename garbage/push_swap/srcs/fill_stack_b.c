/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:32:39 by schouite          #+#    #+#             */
/*   Updated: 2026/02/01 18:41:58 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_b(t_node **stack_a, t_node **stack_b)
{
	int		i;
	char	c;

	c = 'a';
	i = 0;
	while (i < 2 && !is_three_left(*stack_a))
	{
		push(stack_a, stack_b, 'b');
		i++;
	}
	while (!is_three_left(*stack_a))
	{
		refresh_stack_a(*stack_a, *stack_b);
		prep_stack(stack_a, stack_b, c);
		push(stack_a, stack_b, 'b');
	}
	three_sort(stack_a);
	set_index(*stack_a);
}
