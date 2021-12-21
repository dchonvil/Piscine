/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:11:06 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/14 01:51:12 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*box;

	c = 0;
	while (src[c] != '\0')
		c++;
	box = malloc(sizeof(char) * c);
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
