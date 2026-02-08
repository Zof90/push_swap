/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:30:42 by schouite          #+#    #+#             */
/*   Updated: 2026/02/02 19:06:31 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_init_printf(int *i, int *len, int *trigger)
{
	*i = 0;
	*len = 0;
	*trigger = 0;
}

static int	ft_parse(char c, va_list ap, int *trigger)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_print_char(va_arg(ap, int), trigger);
	else if (c == 's')
		len = ft_print_str(va_arg(ap, char *), trigger);
	else if (c == 'x')
		len = ft_print_hex(va_arg(ap, unsigned int), 'x', trigger);
	else if (c == 'X')
		len = ft_print_hex(va_arg(ap, unsigned int), 'X', trigger);
	else if (c == 'i' || c == 'd')
		len = ft_print_nbr(va_arg(ap, int), trigger);
	else if (c == 'u')
		len = ft_print_unsigned(va_arg(ap, unsigned int), trigger);
	else if (c == 'p')
		len = ft_print_ptr(va_arg(ap, void *), trigger);
	else if (c == '%')
		len = ft_print_char('%', trigger);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		len;
	int		trigger;

	ft_init_printf(&i, &len, &trigger);
	if (!format)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_parse(format[i + 1], ap, &trigger);
			i++;
		}
		else
			len += ft_print_char(format[i], &trigger);
		if (format[i])
			i++;
		if (trigger > 0)
			return (-1);
	}
	return (len);
}
