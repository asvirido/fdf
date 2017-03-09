/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:10:46 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/08 12:44:47 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ((len > 0) && (src[i]) != '\0')
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
