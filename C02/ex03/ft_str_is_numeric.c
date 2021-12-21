/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:20:39 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/04 02:28:31 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int c;
	int check;

	c = 0;
	check = 1;
	while (str[c] != '\0')
	{
		if (str[0] == '\0')
			check = 1;
		else if (str[c] < 48 || str[c] > 57)
			check = 0;
		c++;
	}
	return (check);
}
