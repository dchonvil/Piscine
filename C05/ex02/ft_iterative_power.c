/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:11:30 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/10 15:57:13 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int n;

	c = 1;
	n = nb;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	while (c < power)
	{
		nb = nb * n;
		c++;
	}
	return (nb);
}
