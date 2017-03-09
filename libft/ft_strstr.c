/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:03:47 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/06 19:20:36 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*next;
	char	*key;

	if (*big == '\0' && *little == '\0')
		return ((char*)big);
	while (*big)
	{
		next = (char*)big;
		key = (char*)little;
		while ((*big) && (*key) && (*big == *key))
		{
			big++;
			key++;
		}
		if (*key == '\0')
			return (next);
		big = next + 1;
	}
	return (0);
}
