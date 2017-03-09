/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:04:31 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/06 16:27:32 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				save;
	char			*s1;

	s1 = (char*)s;
	i = 0;
	save = -1;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			save = i;
		i++;
	}
	if (save != -1)
		return (&s1[save]);
	if (c == '\0')
		return (&s1[i]);
	return (NULL);
}
