/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:51:45 by schouite          #+#    #+#             */
/*   Updated: 2026/02/05 20:42:16 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

static void	swap_fonction(char *str, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strncmp(str, "sa\n", 3))
		swap_checker(stack_a);
	else if (!ft_strncmp(str, "sb\n", 3))
		swap_checker(stack_b);
	else if (!ft_strncmp(str, "ss\n", 3))
		double_swap_checker(stack_a, stack_b);
}

static void	rotate_fonction(char *str, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strncmp(str, "ra\n", 3))
		rotate_checker(stack_a);
	else if (!ft_strncmp(str, "rb\n", 3))
		rotate_checker(stack_b);
	else if (!ft_strncmp(str, "rr\n", 3))
		double_rotate_checker(stack_a, stack_b);
}
static void	reverse_rotate_fonction(char *str, t_node **stack_a,
		t_node **stack_b)
{
	if (!ft_strncmp(str, "rra\n", 4))
		reverse_rotate_checker(stack_a);
	else if (!ft_strncmp(str, "rrb\n", 4))
		reverse_rotate_checker(stack_b);
	else if (!ft_strncmp(str, "rrr\n", 4))
		double_reverse_rotate_checker(stack_a, stack_b);
}
#include <stdio.h>
void	ft_checker(t_node **stack_a)
{
	t_node	*stack_b;
	char	*str;

	stack_b = NULL;
	str = get_next_line(0);
	while (str)
	{
		if (!(ft_strncmp(str, "sa\n", 3) && ft_strncmp(str, "sb\n", 3)
				&& ft_strncmp(str, "ss\n", 3)))
			swap_fonction(str, stack_a, &stack_b);
		else if (!(ft_strncmp(str, "ra\n", 3) && ft_strncmp(str, "rb\n", 3)
				&& ft_strncmp(str, "rr\n", 3)))
			rotate_fonction(str, stack_a, &stack_b);
		else if (!(ft_strncmp(str, "rra\n", 4) && ft_strncmp(str, "rrb\n", 4)
				&& ft_strncmp(str, "rrr\n", 4)))
			reverse_rotate_fonction(str, stack_a, &stack_b);
		else if (!ft_strncmp(str, "pb\n", 3))
			push_checker(stack_a, &stack_b);
		else if (!ft_strncmp(str, "pa\n", 3))
			push_checker(&stack_b, stack_a);
		//printf("%s\n", str);
		str = get_next_line(0);
	}
}

int	main(int argc, char **argv)
{
	int *arg;
	t_node *stack_a;

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
	ft_checker(&stack_a);
	t_node *tmp = stack_a;
    while (tmp)
    {
        printf("%d\n", tmp->nbr); // Si erreur, remplace 'content' par 'value' ou 'nbr'
        tmp = tmp->next;
    }
	if (is_sorted_checker(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}