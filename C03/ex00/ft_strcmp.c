/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:52:16 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/06 12:52:04 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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
