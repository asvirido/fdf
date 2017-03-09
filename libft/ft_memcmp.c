/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:55:14 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/08 12:38:55 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*point_string1;
	unsigned const char		*point_string2;
	size_t					i;

	i = 0;
	point_string1 = s1;
	point_string2 = s2;
	while (n--)
	{
		if (point_string1[i] != point_string2[i])
			return (point_string1[i] - point_string2[i]);
		i++;
	}
	return (0);
}
