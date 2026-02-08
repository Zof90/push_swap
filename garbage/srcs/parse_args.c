/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:32:01 by schouite          #+#    #+#             */
/*   Updated: 2026/01/28 21:32:04 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_args(int argc, char **argv, int *arg)
{
	int		i;
	t_parse	result;

	i = 0;
	while (i < argc - 1)
	{
		result = ft_atoi(argv[i + 1]);
		if (result.error == 1)
			return (0);
		arg[i] = result.value;
		i++;
	}
	return (1);
}
