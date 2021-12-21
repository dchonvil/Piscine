/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 21:32:07 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/20 20:55:22 by dchonvil         ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	*tab;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	if (min < 0)
		n = ((min * -1) + max);
	else
		n = (max - min);
	tab = malloc(sizeof(int) * n);
	if (tab == NULL)
		return (-1);
	treatment(tab, min, max);
	*range = tab;
	return (n);
}
