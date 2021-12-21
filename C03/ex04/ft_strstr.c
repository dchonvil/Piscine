/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 18:23:42 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/09 21:19:43 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		c;
	int		i;
	int		j;
	char	*n;

	c = 0;
	i = 0;
	j = 0;
	n = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		j = c;
		while (str[j] == to_find[i])
		{
			if ((to_find[i + 1]) == '\0')
				return (str + c);
			i++;
			j++;
		}
		i = 0;
		c++;
	}
	return (n);
}
