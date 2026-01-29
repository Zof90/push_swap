/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_intmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:02:34 by schouite          #+#    #+#             */
/*   Updated: 2026/01/21 15:46:36 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_intmax(char c, long tmp)
{
	if (tmp > INT_MAX / 10 || ((tmp == INT_MAX) && ((c - '0') > INT_MAX % 10)))
		return (0);
	return (1);
}
