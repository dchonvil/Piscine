/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 16:25:27 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/04 02:19:35 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int c;
	int check;

	c = 0;
	check = 1;
	while (str[c] != '\0')
	{
		if (str[0] == '\0')
			check = 1;
		else if ((str[c] < 65 || str[c] > 90) && (str[c] < 97 || str[c] > 122))
			check = 0;
		c++;
	}
	return (check);
}
