/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:41:11 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/16 01:14:25 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(char *base, long int nb, int b)
{
	int		c;
	int		tab[250];

	c = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		tab[c] = base[(nb % b)];
		nb = nb / b;
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		write(1, &tab[c], 1);
		c--;
	}
}

void	treatment(int nbr, char *base, int c, int b)
{
	long int	n;

	n = nbr;
	while (base[b] != '\0')
	{
		if (base[b] == '+' || base[b] == '-')
			return ;
		c = b + 1;
		while (base[c] != '\0')
		{
			if (base[c] == base[b])
				return ;
			c++;
		}
		b++;
	}
	convert(base, n, b);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;
	int	c;

	b = 0;
	c = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return ;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	treatment(nbr, base, c, b);
}
