/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:46:06 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/04 02:59:29 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int c;
	int check;

	c = 0;
	check = 1;
	while (str[c] != '\0')
	{
		if (str[0] == '\0')
			check = 1;
		else if (str[c] < 32 || str[c] > 127)
			check = 0;
		c++;
	}
	return (check);
}
