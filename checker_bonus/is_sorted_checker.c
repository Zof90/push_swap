/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:37:30 by schouite          #+#    #+#             */
/*   Updated: 2026/02/05 20:49:47 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted_checker(t_node *stack_a)
{
	t_node *tmp;

	while (stack_a)
	{
		tmp = stack_a->next;	
		while (tmp)
		{
			if(stack_a->nbr > tmp->nbr)
				return (false);
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
	return (true);
}
