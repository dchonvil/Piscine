/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:56:13 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/01 22:58:47 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_num(int n)
{
	ft_putchar(n + '0');
}

void	display(int *box)
{
	int	c;
	int i;

	c = 0;
	i = 0;
	while (c < 3)
	{
		put_num(box[c]);
		c++;
	}
	if (box[0] < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	manage_box(int first, int second, int third)
{
	int	box[3];

	while (first <= 7)
	{
		while (second <= 8)
		{
			while (third <= 9)
			{
				if (first != second && first != third && second != third)
				{
					box[0] = first;
					box[1] = second;
					box[2] = third;
					display(box);
				}
				third++;
			}
			second++;
			third = second;
		}
		first++;
		second = first;
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = 0;
	second = 1;
	third = 2;
	manage_box(first, second, third);
}
