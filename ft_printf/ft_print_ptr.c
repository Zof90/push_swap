/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42paris.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:31:08 by schouite          #+#    #+#             */
/*   Updated: 2025/11/27 14:45:16 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_convert_hex(size_t nb, int *trigger)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (nb > 16 - 1)
		len += ft_convert_hex(nb / 16, trigger);
	len += ft_print_char(base[nb % 16], trigger);
	return (len);
}

int	ft_print_ptr(void *ptr, int *trigger)
{
	int		len;
	size_t	adr;

	len = 0;
	if (ptr == NULL)
	{
		len = ft_print_str("(nil)", trigger);
		return (len);
	}
	adr = (size_t)ptr;
	len = ft_print_str("0x", trigger);
	len += ft_convert_hex(adr, trigger);
	return (len);
}
/* #include <stdio.h>

int	main(void)
{
	char	value;

	printf("%p\n", &value);
	ft_print_ptr(&value);
	return (0);
} */
