/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:45:47 by schouite          #+#    #+#             */
/*   Updated: 2026/02/07 17:59:45 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

bool	is_it_swap(char *str)
{
	if (!(ft_strncmp(str, "sa\n", 3) && ft_strncmp(str, "sb\n", 3)
			&& ft_strncmp(str, "ss\n", 3)))
		return (true);
	return (false);
}

bool	is_it_rotate(char *str)
{
	if (!(ft_strncmp(str, "ra\n", 3) && ft_strncmp(str, "rb\n", 3)
			&& ft_strncmp(str, "rr\n", 3)))
		return (true);
	return (false);
}

bool	is_it_double_rotate(char *str)
{
	if (!(ft_strncmp(str, "rra\n", 4) && ft_strncmp(str, "rrb\n", 4)
			&& ft_strncmp(str, "rrr\n", 4)))
		return (true);
	return (false);
}

bool	is_it_push(char *str)
{
	if (!(ft_strncmp(str, "pb\n", 3) && ft_strncmp(str, "pa\n", 3)))
		return (true);
	return (false);
}
