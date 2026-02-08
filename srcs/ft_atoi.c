/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:59:39 by schouite          #+#    #+#             */
/*   Updated: 2026/02/08 18:39:50 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_parse	extract_int(char *str, int i, int signe)
{
	long	tmp;
	t_parse	result;

	tmp = 0;
	while (is_digit(str[i]))
	{
		if (!check_intmax(str[i], tmp))
		{
			result.value = 0;
			result.error = 1;
			return (result);
		}
		tmp = tmp * 10 + (str[i] - '0');
		i++;
	}
	tmp *= signe;
	if (tmp > INT_MAX || tmp < INT_MIN)
	{
		result.value = 0;
		result.error = 1;
		return (result);
	}
	result.value = tmp;
	result.error = 0;
	return (result);
}

t_parse	ft_atoi(char *str)
{
	int		i;
	int		signe;
	t_parse	result;

	signe = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (!is_it_valid_int(&str[i]))
	{
		result.value = 0;
		result.error = 1;
		return (result);
	}
	return (extract_int(str, i, signe));
}
