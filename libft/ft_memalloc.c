/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 17:06:52 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/08 12:37:45 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char		*s;
	size_t		i;

	if (size > 0)
	{
		i = 0;
		s = (char*)malloc(sizeof(char) * size);
		if (s != NULL)
		{
			while (size > 0)
			{
				s[i] = 0;
				size--;
				i++;
			}
			return (s);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
