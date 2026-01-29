/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:38:17 by schouite          #+#    #+#             */
/*   Updated: 2026/01/29 19:16:36 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		*arg;
	t_node	*lst;
	t_node	*tmp;
	t_node	*stack_b;

	lst = NULL;
	i = 0;
	arg = malloc(sizeof(int) * argc - 1);
	if (!arg)
		return (1);
	if (argc < 2)
		return (1);
	if (!check(argc, argv, arg))
		return (free(arg), print_error(), 1);
	if (!int_stack(&lst, arg, argc))
		return (free(arg), 1);
	stack_b = algo(&lst);
	//------test-------
	tmp = lst;
	while (tmp)
	{
		printf("%d\n", tmp->nbr);
		printf("%d\n", tmp->index);
		printf("-----\n");
		tmp = tmp->next;
		i++;
	}
	printf("--stack_b---\n");
	while (stack_b)
	{
		printf("%d\n", stack_b->nbr);
		printf("%d\n", stack_b->index);
		printf("-----\n");
		stack_b = stack_b->next;
	}
	tmp = lst;
	printf("--stack_a2---\n");
	while (tmp)
	{
		printf("%d\n", tmp->nbr);
		printf("%d\n", tmp->index);
		printf("-----\n");
		tmp = tmp->next;
		i++;
	}
}
