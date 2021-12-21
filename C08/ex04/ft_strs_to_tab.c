/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:13:28 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/19 06:41:58 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					counter_char(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char				*ft_strdup(char *src)
{
	int		c;
	char	*box;

	c = 0;
	while (src[c] != '\0')
		c++;
	box = malloc(sizeof(char) * (c + 1));
	if (box == NULL)
		return (box);
	c = 0;
	while (src[c] != '\0')
	{
		box[c] = src[c];
		c++;
	}
	box[c] = '\0';
	return (box);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					c;
	t_stock_str			*stocker;

	if (ac < 0)
		return (0);
	stocker = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stocker == NULL)
		return (stocker);
	c = 0;
	while (c < ac)
	{
		stocker[c].size = counter_char(av[c]);
		stocker[c].str = av[c];
		stocker[c].copy = ft_strdup(av[c]);
		c++;
	}
	stocker[c].str = 0;
	return (stocker);
}
