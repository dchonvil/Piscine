/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 17:36:56 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/06 12:59:08 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				check;
	unsigned int	c;

	c = 0;
	check = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && c < n)
	{
		if (s1[c] < s2[c])
			return (check = (s2[c] - s1[c]) * -1);
		else if (s1[c] > s2[c])
			return (check = s1[c] - s2[c]);
		c++;
	}
	return (check);
}
