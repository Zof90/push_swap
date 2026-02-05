/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_smaller_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:58 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:27:34 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*is_smaller_nb(t_node *lst, int nb)
{
	while (lst)
	{
		if (lst->nbr < nb)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
