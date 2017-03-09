/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:15:05 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/06 14:51:39 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*point_dst;
	unsigned char		*point_src;

	point_dst = (unsigned char*)dst;
	point_src = (unsigned char*)src;
	if (point_dst == point_src)
		return (dst);
	if (point_dst > point_src)
	{
		point_dst = point_dst + len - 1;
		point_src = point_src + len - 1;
		while (len-- > 0)
			*(point_dst--) = *(point_src--);
		return (dst);
	}
	while (len-- > 0)
		*(point_dst++) = *(point_src++);
	return (dst);
}
