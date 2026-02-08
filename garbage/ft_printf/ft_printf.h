/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42paris.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:45:15 by schouite          #+#    #+#             */
/*   Updated: 2025/11/27 14:46:12 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>

int	ft_print_char(char c, int *trigger);
int	ft_print_hex(unsigned int nb, char c, int *trigger);
int	ft_print_unsigned(unsigned int n, int *trigger);
int	ft_print_str(char *str, int *trigger);
int	ft_print_nbr(int n, int *trigger);
int	ft_print_ptr(void *ptr, int *trigger);
int	ft_printf(const char *format, ...);

#endif
