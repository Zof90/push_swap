/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:38:31 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 20:43:38 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_stack(t_node **stack_a, t_node **stack_b, char c)
{
	t_node	*target;
	t_node	*cheapeast;
	char	target_char;

	if (c == 'a')
		target_char = 'b';
	else if (c == 'b')
		target_char = 'a';
	cheapeast = get_cheapeast(*stack_a);
	target = cheapeast->target_node;
	while (cheapeast->prev && target->prev)
	{
		if (cheapeast->above_mediane && target->above_mediane)
			double_rotate(stack_a, stack_b);
		else if (!(cheapeast->above_mediane || target->above_mediane))
			double_reverse_rotate(stack_a, stack_b);
		else
			break ;
	}
	while (cheapeast->prev)
		prep_stack_util(stack_a, cheapeast, c);
	while (target->prev)
		prep_stack_util(stack_b, target, target_char);
}
