/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 15:59:08 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/02 17:47:30 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int i;
	int box[size];

	c = 0;
	i = size - 1;
	while (c < size)
	{
		box[c] = tab[i];
		c++;
		i--;
	}
	c = 0;
	while (c < size)
	{
		*(tab + c) = box[c];
		c++;
	}
}
