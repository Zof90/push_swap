/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42paris.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:23:32 by schouite          #+#    #+#             */
/*   Updated: 2025/11/27 14:58:05 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n, int *trigger)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		ft_print_char('-', trigger);
		nb *= -1;
		len++;
	}
	if (nb > 9)
		len += ft_print_nbr(nb / 10, trigger);
	len += ft_print_char(nb % 10 + '0', trigger);
	return (len);
}
