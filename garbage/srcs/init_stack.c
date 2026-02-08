/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:07:27 by schouite          #+#    #+#             */
/*   Updated: 2026/02/04 17:02:31 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	int_stack(t_node **lst, int *arg, int argc)
{
	int		i;
	t_node	*new;

	i = 0;
	while (i < argc - 1)
	{
		new = new_node(arg[i]);
		if (!new)
			return (ft_lstclr(lst), false);
		append_nd_back(lst, new);
		i++;
	}
	set_index(*lst);
	return (true);
}
