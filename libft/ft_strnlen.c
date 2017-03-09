/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 11:34:32 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/08 12:41:10 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s[i] && len < maxlen)
	{
		i++;
		len++;
	}
	return (len);
}
