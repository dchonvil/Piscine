/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 18:07:28 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/04 18:16:11 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
