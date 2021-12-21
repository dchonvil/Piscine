/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:37:18 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/10 15:41:24 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		nb--;
		n *= ft_recursive_factorial(nb);
	}
	return (n);
}
