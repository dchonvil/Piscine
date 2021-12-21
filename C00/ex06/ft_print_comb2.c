/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 06:21:25 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/02 07:50:02 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	put_num(int nb)
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
		nb = nb * (-1);
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

void	display(int first, int second)
{
	if (first < 10)
	{
		put_num(0);
		put_num(first);
	}
	else
		put_num(first);
	ft_putstr(" ");
	if (second < 10)
	{
		put_num(0);
		put_num(second);
	}
	else
		put_num(second);
	if (first == 98 && second == 99)
		return ;
	ft_putstr(", ");
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	second = 0;
	while (first < 99)
	{
		if (first == 98 && second == 99)
			return ;
		if (second == 99)
		{
			first = first + 1;
			second = first;
		}
		second++;
		display(first, second);
	}
}
