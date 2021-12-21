/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:31:52 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/13 22:33:58 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	treatment(int *tab, int min, int max)
{
	int c;
	int i;

	c = 0;
	i = min;
	while (i < max)
	{
		tab[c] = i;
		i++;
		c++;
	}
}

int		*ft_range(int min, int max)
{
	int n;
	int *tab;

	if (min >= max)
	{
		tab = 0;
		return (tab);
	}
	if (min < 0)
		n = ((min * -1) + max) + 1;
	else
		n = (max - min) + 1;
	tab = malloc(sizeof(int) * n);
	if (tab == NULL)
		return (0);
	treatment(tab, min, max);
	return (tab);
}
