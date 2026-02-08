/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition_util.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:01:53 by schouite          #+#    #+#             */
/*   Updated: 2026/02/07 18:00:00 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "checker.h"

void	push_fonction(char *str, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strncmp(str, "pb\n", 3))
		push_checker(stack_a, stack_b);
	else if (!ft_strncmp(str, "pa\n", 3))
		push_checker(stack_b, stack_a);
}

void	swap_fonction(char *str, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strncmp(str, "sa\n", 3))
		swap_checker(stack_a);
	else if (!ft_strncmp(str, "sb\n", 3))
		swap_checker(stack_b);
	else if (!ft_strncmp(str, "ss\n", 3))
		double_swap_checker(stack_a, stack_b);
}

void	rotate_fonction(char *str, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strncmp(str, "ra\n", 3))
		rotate_checker(stack_a);
	else if (!ft_strncmp(str, "rb\n", 3))
		rotate_checker(stack_b);
	else if (!ft_strncmp(str, "rr\n", 3))
		double_rotate_checker(stack_a, stack_b);
}

void	double_rotate_fonction(char *str, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strncmp(str, "rra\n", 4))
		reverse_rotate_checker(stack_a);
	else if (!ft_strncmp(str, "rrb\n", 4))
		reverse_rotate_checker(stack_b);
	else if (!ft_strncmp(str, "rrr\n", 4))
		double_reverse_rotate_checker(stack_a, stack_b);
}
