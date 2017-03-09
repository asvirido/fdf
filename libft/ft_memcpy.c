/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:09:43 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/08 12:38:37 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*point_dest;
	unsigned const char	*point_src;
	size_t				i;

	i = 0;
	point_dest = dst;
	point_src = src;
	while (n--)
	{
		point_dest[i] = point_src[i];
		i++;
	}
	return (dst);
}
