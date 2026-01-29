/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:40:20 by schouite          #+#    #+#             */
/*   Updated: 2025/08/20 14:45:16 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	base_verif(char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{	
		j = 0;
		while (base[j] && j < ft_strlen(base) - 1)
		{
			if (base[i] == base[j + i + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	if (ft_strlen(base) < 2)
		return ;
	if (base_verif(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nbr = nbr * -1;
	}
	if (nbr > ft_strlen(base) - 1)
		ft_putnbr_base(nbr / ft_strlen(base), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}
/*
#include<stdio.h>
int	main(void)
{
	int	a;

	a = 30;
	ft_putnbr_base(a,"10");
}
*/
