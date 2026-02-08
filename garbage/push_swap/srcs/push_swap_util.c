/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 19:30:08 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 22:12:51 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **lst, char c)
{
	t_node	*tmp;

	tmp = (*lst)->next;
	(*lst)->prev = tmp;
	(*lst)->next = tmp->next;
	tmp->prev = NULL;
	tmp->next = *lst;
	*lst = tmp;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
}

void	push(t_node **stack_a, t_node **stack_b, char c)
{
	t_node	*tmp;

	tmp = *stack_a;
	if ((*stack_a)->next)
		*stack_a = (*stack_a)->next;
	(*stack_a)->prev = NULL;
	if (!*stack_b)
	{
		*stack_b = tmp;
		tmp->next = NULL;
		if (c == 'a')
			write(1, "pa\n", 3);
		else if (c == 'b')
			write(1, "pb\n", 3);
		return ;
	}
	tmp->next = *stack_b;
	(*stack_b)->prev = tmp;
	*stack_b = tmp;
	set_index(*stack_a);
	set_index(*stack_b);
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}

void	rotate(t_node **lst, char c)
{
	t_node	*tmp;

	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = NULL;
	(*lst)->prev = NULL;
	append_nd_back(lst, tmp);
	set_index(*lst);
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

void	reverse_rotate(t_node **lst, char c)
{
	t_node	*tmp;

	tmp = ft_extract_last(lst);
	tmp->next = *lst;
	(*lst)->prev = tmp;
	*lst = tmp;
	set_index(*lst);
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}
