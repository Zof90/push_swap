/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapeast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:29:54 by schouite          #+#    #+#             */
/*   Updated: 2026/01/27 17:28:39 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*get_cheapeast(t_node *stack_a)
{
	t_node	*cheapeast;

	cheapeast = stack_a;
	while (stack_a)
	{
		if (stack_a->push_cost < cheapeast->push_cost)
			cheapeast = stack_a;
		stack_a = stack_a->next;
	}
	cheapeast->cheapeast = true;
	return (cheapeast);
}
