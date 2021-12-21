/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 04:37:44 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/21 18:34:02 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
void	ft_rev_tab(char *tab, int size);
int		check_base(char *base, int b);

void	convert(char *base, char *tab, long int nb, int b)
{
	int		c;
	int		n;

	c = 0;
	n = 0;
	if (nb < 0)
	{
		n = 1;
		nb *= -1;
	}
	while (nb > 0)
	{
		tab[c] = base[(nb % b)];
		nb = nb / b;
		c++;
	}
	if (n == 1)
	{
		tab[c] = '-';
		c++;
	}
	ft_rev_tab(tab, c);
	tab[c] = '\0';
}

int		treatments(long int nbr, char *base, char *tab, int b)
{
	int	c;

	c = 0;
	while (base[b] != '\0')
	{
		if (base[b] == '+' || base[b] == '-' || base[b] == '\t'
			|| base[b] == '\n' || base[b] == '\v' || base[b] == '\f'
			|| base[b] == '\r' || base[b] == ' ')
			return (0);
		c = b + 1;
		while (base[c] != '\0')
		{
			if (base[c] == base[b])
				return (0);
			c++;
		}
		b++;
	}
	convert(base, tab, nbr, b);
	return (1);
}

int		ft_putnbr_base(long int nbr, char *base, char *tab)
{
	int	b;
	int c;

	b = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	if (nbr == 0)
	{
		tab[0] = base[0];
		tab[1] = '\0';
		return (1);
	}
	c = treatments(nbr, base, tab, b);
	return (c);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				c;
	long int		n;
	char			*box;

	if (check_base(base_from, 0) == 0 || check_base(base_to, 0) == 0)
		return (0);
	box = malloc(sizeof(char) * 3000);
	if (box == NULL)
		return (0);
	n = ft_atoi_base(nbr, base_from);
	c = ft_putnbr_base(n, base_to, box);
	if (c == 0)
		return (0);
	return (box);
}
