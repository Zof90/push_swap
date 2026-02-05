/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:43:23 by schouite          #+#    #+#             */
/*   Updated: 2026/01/21 23:16:42 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(int argc, char **argv, int *arg)
{
	if (!parse_args(argc, argv, arg))
		return (0);
	if (!check_duplicates(argc, arg))
		return (0);
	return (1);
}
