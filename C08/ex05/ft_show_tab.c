/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:47:11 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/19 06:44:52 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

void	ft_putnbr(int nb)
{
	int modulo;

	modulo = 1;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putstr("-2147483648");
			return ;
		}
		nb *= -1;
		ft_putchar('-');
	}
	while ((nb / modulo) >= 10)
	{
		modulo = modulo * 10;
	}
	while (modulo > 0)
	{
		ft_putchar((nb / modulo) % 10 + '0');
		modulo = modulo / 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	c;

	c = 0;
	while (par[c].str != 0)
	{
		ft_putstr(par[c].str);
		ft_putchar('\n');
		ft_putnbr(par[c].size);
		ft_putchar('\n');
		ft_putstr(par[c].copy);
		ft_putchar('\n');
		c++;
	}
}
