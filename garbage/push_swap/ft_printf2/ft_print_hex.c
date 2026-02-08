/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:37:28 by schouite          #+#    #+#             */
/*   Updated: 2026/02/08 15:17:20 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_hex(unsigned int nb, char c, int *trigger)
{
	int		len;
	char	*base;

	len = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb > 15)
		len += ft_print_hex(nb / 16, c, trigger);
	len += ft_print_char(base[nb % 16], trigger);
	return (len);
}
