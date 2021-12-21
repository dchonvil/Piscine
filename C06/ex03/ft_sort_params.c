/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 05:23:35 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/10 08:41:49 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int c;
	int check;

	c = 0;
	check = 0;
	while (s1[c] != '\0' || s2[c] != '\0')
	{
		if (s1[c] < s2[c])
			return (check = (s2[c] - s1[c]) * -1);
		else if (s1[c] > s2[c])
			return (check = s1[c] - s2[c]);
		c++;
	}
	return (check);
}

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

void	sorter(char **tab, int size)
{
	int		c;
	int		i;
	char	*temp;

	c = 1;
	i = 1;
	while (c < size)
	{
		while (i < size)
		{
			if (ft_strcmp(tab[c], tab[i]) < 0)
			{
				temp = tab[c];
				tab[c] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		i = 1;
		c++;
	}
}

int		main(int argc, char *argv[])
{
	int c;

	c = 1;
	if (argc > 1)
	{
		sorter(argv, argc);
		while (c < argc)
		{
			ft_putstr(argv[c]);
			c++;
		}
	}
	return (0);
}
