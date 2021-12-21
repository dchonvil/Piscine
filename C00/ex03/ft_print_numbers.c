/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:18:17 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/01 18:30:17 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		c;
	char	*str;

	str = "0123456789";
	c = 0;
	while (c <= 9)
	{
		ft_putchar(str[c]);
		c++;
	}
	return ;
}
