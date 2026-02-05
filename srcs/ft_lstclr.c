/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 23:08:55 by schouite          #+#    #+#             */
/*   Updated: 2026/02/01 15:17:47 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclr(t_node **lst)
{
	t_node	*tmp;

	tmp = *lst;
	while (tmp)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	if (*lst)
		free(*lst);
}
