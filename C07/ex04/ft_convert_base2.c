/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 04:39:17 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/21 18:05:56 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_rev_tab(char *tab, int size)
{
	int		c;
	int		i;
	char	box[size];

	c = 0;
	i = size - 1;
	while (c < size)
	{
		box[c] = tab[i];
		c++;
		i--;
	}
	c = 0;
	while (c < size)
	{
		*(tab + c) = box[c];
		c++;
	}
	*(tab + c) = '\0';
}

int			check_base(char *base, int b)
{
	int	c;
	int i;

	c = 0;
	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (i);
	while (base[b] != '\0')
	{
		if (base[b] == '+' || base[b] == '-' || base[b] == '\t'
			|| base[b] == '\n' || base[b] == '\v' || base[b] == '\f'
			|| base[b] == '\r' || base[b] == ' ')
			return (i);
		c = b + 1;
		while (base[c] != '\0')
		{
			if (base[c] == base[b])
				return (i);
			c++;
		}
		b++;
	}
	return (b);
}

long int	treatment(char *str, char *base, int c, int p)
{
	int			b;
	int			i;
	int			t;
	long int	n;

	b = 0;
	i = -1;
	n = 0;
	t = 1;
	while (base[b] != '\0')
		b++;
	while (c >= p)
	{
		while (base[++i] != '\0')
		{
			if (str[c] == base[i])
			{
				n += i * t;
				t = t * b;
			}
		}
		i = -1;
		c--;
	}
	return (n);
}

int			base_match(char *str, char *base, int c)
{
	int			p;
	int			z;
	long int	i;

	i = 0;
	p = c;
	z = 1;
	while (str[c] != '\0' && z == 1)
	{
		while (base[i] != '\0' && base[i] != str[c])
		{
			if (base[i + 1] == '\0')
			{
				z = 0;
				c--;
			}
			i++;
		}
		i = 0;
		c++;
	}
	i = treatment(str, base, c, p);
	return (i);
}

long int	ft_atoi_base(char *str, char *base)
{
	int			c;
	int			i;
	long int	n;

	c = 0;
	i = 0;
	n = 0;
	if (check_base(base, n) == 0)
		return (c);
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\v' ||
			str[c] == '\f' || str[c] == '\r' || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			i++;
		c++;
	}
	n = base_match(str, base, c);
	if ((i % 2) == 1)
		n *= -1;
	return (n);
}
