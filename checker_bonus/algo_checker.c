/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:36:24 by schouite          #+#    #+#             */
/*   Updated: 2026/02/07 17:59:22 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

int	ft_checker(t_node **stack_a)
{
	t_node	*stack_b;
	char	*str;

	stack_b = NULL;
	str = get_next_line(0);
	while (str)
	{
		if (is_it_push(str))
			push_fonction(str, stack_a, &stack_b);
		else if (is_it_swap(str))
			swap_fonction(str, stack_a, &stack_b);
		else if (is_it_rotate(str))
			rotate_fonction(str, stack_a, &stack_b);
		else if (is_it_double_rotate(str))
			double_rotate_fonction(str, stack_a, &stack_b);
		else
			return (free(str), close(0), get_next_line(0), ft_lstclr(&stack_b),
				0);
		free(str);
		str = get_next_line(0);
	}
	if (stack_b)
		return (ft_lstclr(&stack_b), 2);
	return (1);
}

int	algo_checker(t_node **stack_a)
{
	int	i;

	i = ft_checker(stack_a);
	if (i == 0)
		return (ft_lstclr(stack_a), print_error(), 1);
	if (i == 3)
		return (2);
	if (is_sorted_checker(*stack_a) && i == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_lstclr(stack_a);
	return (0);
}
