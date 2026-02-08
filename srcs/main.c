/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:38:17 by schouite          #+#    #+#             */
/*   Updated: 2026/02/08 19:04:40 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*arg;
	t_node	*lst;

	lst = NULL;
	arg = malloc(sizeof(int) * argc - 1);
	if (!arg)
		return (1);
	if (argc < 2)
		return (free(arg), 1);
	if (!check(argc, argv, arg))
		return (free(arg), print_error(), 1);
	if (is_sorted(argc, arg))
		return (free(arg), 1);
	if (!int_stack(&lst, arg, argc))
		return (free(arg), 1);
	free(arg);
	algo(&lst);
	ft_lstclr(&lst);
	return (0);
}
