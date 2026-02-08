/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_above_mediane.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:11:26 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:27:14 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_above_mediane(t_node *lst, int index)
{
	int	med;

	med = mediane(lst);
	if (index < med)
		return (true);
	return (false);
}
