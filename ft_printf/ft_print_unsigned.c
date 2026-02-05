/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42paris.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:32:16 by schouite          #+#    #+#             */
/*   Updated: 2025/11/27 14:46:58 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n, int *trigger)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_print_unsigned(n / 10, trigger);
	len += ft_print_char(n % 10 + '0', trigger);
	return (len);
}
