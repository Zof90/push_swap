/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_bigger_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:46:22 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:27:27 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*is_bigger_nb(t_node *lst, int nb)
{
	while (lst)
	{
		if (lst->nbr > nb)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
