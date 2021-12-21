/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 07:23:00 by dchonvil          #+#    #+#             */
/*   Updated: 2020/07/22 07:50:22 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_word(char letter, char *charset)
{
	int c;

	c = 0;
	while (charset[c] != '\0')
	{
		if (letter == charset[c])
			return (1);
		c++;
	}
	return (0);
}

int		ft_count(char *str, char *charset)
{
	int	c;

	c = 0;
	while (*str)
	{
		while (*str && ft_word(*str, charset))
			str++;
		if (*str && !ft_word(*str, charset))
		{
			c++;
			while (*str && !ft_word(*str, charset))
				str++;
		}
	}
	return (c);
}

char	*malloc_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !ft_word(str[i], charset))
		i++;
	if (!(word = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && !ft_word(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**dest;

	if (!(dest = malloc(sizeof(char *) * (ft_count(str, charset) + 1))))
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_word(*str, charset))
			str++;
		if (*str && !ft_word(*str, charset))
		{
			dest[i] = malloc_word(str, charset);
			i++;
			while (*str && !ft_word(*str, charset))
				str++;
		}
	}
	dest[i] = NULL;
	return (dest);
}
