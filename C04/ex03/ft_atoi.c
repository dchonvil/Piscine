/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 21:15:51 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/15 18:57:50 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	treatment(char *str, int c, long int n)
{
	int i;
	int m;
	int check;

	i = c;
	m = 10;
	if (str[c] < 48 || str[c] > 57)
		return (0);
	while ((str[c] > 47 && str[c] < 58))
		c++;
	c = c - 1;
	check = c;
	while (c >= i)
	{
		if (c < check)
		{
			n += (str[c] - 48) * m;
			m *= 10;
		}
		else
			n += str[c] - 48;
		c--;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int			c;
	int			i;
	long int	n;

	c = 0;
	i = 0;
	n = 0;
	while (check_space(str[c]))
		c++;
	if (!(str[c] == '+' || str[c] == '-' || (str[c] > 47 && str[c] < 58)))
		return (0);
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			i++;
		c++;
	}
	n = treatment(str, c, n);
	if (n == 0)
		return (n);
	else if ((i % 2) == 1)
		n *= -1;
	return (n);
}
