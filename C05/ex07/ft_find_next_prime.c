/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:42:42 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/13 01:45:36 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int c;
	int n;

	if (nb < 2)
		return (0);
	c = 2;
	n = 1;
	while (c <= (nb / c))
	{
		if (nb % c == 0)
		{
			n = 0;
			return (n);
		}
		c++;
	}
	return (n);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
