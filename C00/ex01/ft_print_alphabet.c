/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:55:03 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/01 14:45:48 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int		c;
	char	*str;

	str = "abcdefghijklmnopqrstuvwxyz";
	c = 0;
	while (c <= 25)
	{
		ft_putchar(str[c]);
		c++;
	}
	return ;
}
