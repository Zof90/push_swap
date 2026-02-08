/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_valide_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:29:39 by schouite          #+#    #+#             */
/*   Updated: 2026/02/08 18:44:28 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <stdbool.h>

bool	is_it_valid_int(char *str)
{
	while (*str)
	{
		if (!is_digit(*str))
			break ;
		str++;
	}
	if (!*str)
		return (true);
	return (false);
}
