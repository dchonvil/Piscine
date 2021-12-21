/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 04:17:53 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/14 01:26:43 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int c;
	int s;

	c = 0;
	s = 0;
	ft_strlowcase(str);
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	while (str[c] != '\0')
	{
		s = c + 1;
		if (!((str[c] > 96 && str[c] < 123) || (str[c] > 64 && str[c] < 91)
					|| (str[c] > 47 && str[c] < 58)))
			if (str[s] > 96 && str[s] < 123)
				str[s] = str[s] - 32;
		c++;
	}
	return (str);
}
