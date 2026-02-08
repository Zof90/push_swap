/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:51:45 by schouite          #+#    #+#             */
/*   Updated: 2026/02/06 17:04:33 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*arg;
	t_node	*stack_a;

	stack_a = NULL;
	arg = malloc(sizeof(int) * (argc - 1));
	if (!arg)
		return (1);
	if (argc < 2)
		return (1);
	if (!check(argc, argv, arg))
		return (free(arg), print_error(), 1);
	if (!int_stack(&stack_a, arg, argc))
		return (free(arg), 1);
	free(arg);
	algo_checker(&stack_a);
	return (0);
}
