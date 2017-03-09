/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 12:37:36 by asvirido          #+#    #+#             */
/*   Updated: 2016/11/29 17:54:50 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_string;
	unsigned int	lengh;
	unsigned int	i;
	unsigned int	j;

	if ((s1 != NULL) && (s2 != NULL))
	{
		lengh = ft_strlen(s1) + ft_strlen(s2);
		new_string = (char*)malloc(sizeof(char) * lengh + 1);
		if (new_string != NULL)
		{
			i = ft_strlen(s1);
			j = 0;
			new_string = ft_strcpy(new_string, s1);
			while (i < lengh)
			{
				new_string[i] = s2[j];
				i++;
				j++;
			}
			new_string[i] = '\0';
			return (new_string);
		}
	}
	return (0);
}
