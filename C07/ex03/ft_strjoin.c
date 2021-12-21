/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 22:35:40 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/21 06:32:38 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sub_loop(char *str, char *sep, int i, int n)
{
	while (sep[i] != '\0')
	{
		str[n] = sep[i];
		n++;
		i++;
	}
	return (n);
}

void	looper(int size, char **strs, char *sep, char *str)
{
	int c;
	int i;
	int n;

	c = 0;
	i = 0;
	n = 0;
	while (c < size)
	{
		while (strs[c][i] != '\0')
		{
			str[n] = strs[c][i];
			n++;
			i++;
		}
		i = 0;
		if (c < (size - 1))
			n = sub_loop(str, sep, i, n);
		c++;
	}
	str[n] = '\0';
}

int		sizer(int size, char **strs, char *sep, int n)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	if (size > 0)
	{
		while (c < size)
		{
			while (strs[c][i] != '\0')
				i++;
			n += i;
			i = 0;
			c++;
		}
		while (sep[i] != '\0')
			i++;
		n += i * (size - 1);
	}
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		c;
	int		n;
	char	*str;

	n = sizer(size, strs, sep, 0);
	str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (0);
	c = 0;
	if (size <= 0)
	{
		str[0] = '\0';
		return (str);
	}
	looper(size, strs, sep, str);
	return (str);
}
