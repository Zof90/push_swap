/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42paris.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:14:49 by schouite          #+#    #+#             */
/*   Updated: 2025/11/27 14:45:59 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str, int *trigger)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (str == NULL)
	{
		len = ft_print_str("(null)", trigger);
		return (len);
	}
	while (str[i])
	{
		len += ft_print_char(str[i], trigger);
		i++;
	}
	return (len);
}
