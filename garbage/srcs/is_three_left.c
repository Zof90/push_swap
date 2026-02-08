/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_three_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:08:28 by schouite          #+#    #+#             */
/*   Updated: 2026/01/31 21:45:13 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_three_left(t_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	if (i == 3)
		return (true);
	return (false);
}
