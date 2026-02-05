/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_util_double.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:53:05 by schouite          #+#    #+#             */
/*   Updated: 2026/02/05 21:22:51 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

void	double_swap_checker(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	swap_checker(stack_a);
	swap_checker(stack_b);
}
void	double_rotate_checker(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	rotate_checker(stack_a);
	rotate_checker(stack_b);
}

void	double_reverse_rotate_checker(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	reverse_rotate_checker(stack_a);
	reverse_rotate_checker(stack_b);
}
