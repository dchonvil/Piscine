/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:38:52 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/04 02:40:37 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int c;
	int check;

	c = 0;
	check = 1;
	while (str[c] != '\0')
	{
		if (str[0] == '\0')
			check = 1;
		else if (str[c] < 65 || str[c] > 90)
			check = 0;
		c++;
	}
	return (check);
}
