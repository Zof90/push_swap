/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:51:03 by schouite          #+#    #+#             */
/*   Updated: 2026/02/07 17:57:59 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

void	swap_checker(t_node **lst)
{
	t_node	*tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = *lst;
	tmp->prev = NULL;
	tmp->next = *lst;
	(*lst)->prev = tmp;
	*lst = tmp;
}

void	push_checker(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	if ((*stack_a)->next)
	{
		*stack_a = (*stack_a)->next;
		(*stack_a)->prev = NULL;
	}
	else
		*stack_a = NULL;
	if (!*stack_b)
	{
		*stack_b = tmp;
		tmp->next = NULL;
		return ;
	}
	tmp->next = *stack_b;
	(*stack_b)->prev = tmp;
	*stack_b = tmp;
}

void	rotate_checker(t_node **lst)
{
	t_node	*tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = NULL;
	(*lst)->prev = NULL;
	append_nd_back(lst, tmp);
	set_index(*lst);
}

void	reverse_rotate_checker(t_node **lst)
{
	t_node	*tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = ft_extract_last(lst);
	tmp->next = *lst;
	(*lst)->prev = tmp;
	*lst = tmp;
	set_index(*lst);
}
