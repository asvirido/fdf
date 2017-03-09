/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:46:53 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/03 16:27:24 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_string;
	int		lengh;
	int		i;

	if (s != NULL)
	{
		lengh = ft_strlen(s);
		new_string = (char*)malloc(sizeof(char) * lengh + 1);
		if (new_string != NULL)
		{
			i = 0;
			while (i < lengh)
			{
				new_string[i] = (*f)(s[i]);
				i++;
			}
			new_string[i] = '\0';
			return (new_string);
		}
	}
	return (0);
}
