/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_stack_util.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:38:20 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 20:13:05 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_stack_util(t_node **lst, t_node *node, char c)
{
	if (node->above_mediane)
		rotate(lst, c);
	else
		reverse_rotate(lst, c);
}
