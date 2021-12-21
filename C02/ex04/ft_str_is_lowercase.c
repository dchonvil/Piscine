/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:29:21 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/04 02:37:22 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int c;
	int check;

	c = 0;
	check = 1;
	while (str[c] != '\0')
	{
		if (str[0] == '\0')
			check = 1;
		else if (str[c] < 97 || str[c] > 122)
			check = 0;
		c++;
	}
	return (check);
}
