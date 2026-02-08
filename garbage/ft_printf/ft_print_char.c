/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42paris.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:26:27 by schouite          #+#    #+#             */
/*   Updated: 2025/12/12 15:04:52 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c, int *trigger)
{
	int	len;

	len = 0;
	if (!*trigger)
		len = write(1, &c, 1);
	if (len < 0)
		*trigger = 1;
	return (len);
}
