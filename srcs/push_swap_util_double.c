/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util_double.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:06:44 by schouite          #+#    #+#             */
/*   Updated: 2026/02/03 16:52:15 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_swap(t_node **stack_a, t_node **stack_b)
{
	char	c;

	c = 'c';
	swap(stack_a, c);
	swap(stack_b, c);
	write(1, "ss\n", 3);
}

void	double_rotate(t_node **stack_a, t_node **stack_b)
{
	char	c;

	c = 'c';
	rotate(stack_a, c);
	rotate(stack_b, c);
	write(1, "rr\n", 3);
}

void	double_reverse_rotate(t_node **stack_a, t_node **stack_b)
{
	char	c;

	c = 'c';
	reverse_rotate(stack_a, c);
	reverse_rotate(stack_b, c);
	write(1, "rrr\n", 4);
}
