/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 05:10:45 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/10 06:02:37 by dchonvil         ###   ########.fr       */
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
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	int c;

	c = 1;
	if (argc > 1)
	{
		while (c < argc)
		{
			ft_putstr(argv[c]);
			c++;
		}
	}
	return (0);
}
