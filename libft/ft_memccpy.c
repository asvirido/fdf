/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:42:36 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/08 12:38:00 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*point_dest;
	unsigned char		*point_src;
	size_t				i;

	i = 0;
	point_dest = (unsigned char*)dst;
	point_src = (unsigned char*)src;
	while (n--)
	{
		point_dest[i] = point_src[i];
		if (point_src[i] == (unsigned char)c)
		{
			point_dest[i] = (unsigned char)c;
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
