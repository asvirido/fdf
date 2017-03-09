/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:28:45 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/19 15:02:13 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_word(char const *s, char c)
{
	int		i;
	int		word;

	word = 1;
	i = 0;
	if (s[i] != c)
		word++;
	while (s[i])
	{
		if (s[i] == c)
			if (s[i + 1] != c && s[i + 1] != '\0')
				word++;
		i++;
	}
	return (word);
}

static int		ft_delimiter(char const *s, char c, int i)
{
	char	*p1;
	int		lenght;

	lenght = 0;
	p1 = (char*)s;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		lenght++;
	}
	return (lenght);
}

static int		ft_save_i(char const *s, char c, int i)
{
	char	*p1;

	p1 = (char*)s;
	while (s[i] != c && s[i])
		i++;
	while (s[i] == c)
		i++;
	return (i);
}

static char		*ft_new(size_t size)
{
	char	*new;

	if (size > 0)
	{
		if (!((new) = (char*)malloc(sizeof(char) * size + 1)))
			return (NULL);
		ft_memset(new, '\0', size + 1);
		return (new);
	}
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**new_array;
	int				word;
	int				lenght;
	unsigned int	i;
	int				j;

	if (s == NULL)
		return (NULL);
	word = ft_word(s, c);
	j = 0;
	i = 0;
	if ((new_array = (char**)malloc(sizeof(char*) * word)) == NULL)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (word-- > 0)
	{
		lenght = 0;
		lenght = ft_delimiter(s, c, i);
		new_array[j] = ft_new(lenght);
		new_array[j] = ft_strncpy(new_array[j], &s[i], lenght);
		i = ft_save_i(s, c, i);
		j++;
	}
	return (new_array);
}
