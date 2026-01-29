/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:20:05 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:31:08 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	mediane(t_node *lst)
{
	int	mediane;

	mediane = 0;
	while (lst->next)
	{
		mediane++;
		lst = lst->next;
	}
	mediane = (mediane + 1) / 2;
	return (mediane);
}
