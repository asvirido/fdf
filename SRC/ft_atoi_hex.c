/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 18:21:16 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/02 11:03:06 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static void		ft_valid_color(char *s)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != ' ')
	{
		if ((s[i] >= 'A' && s[i] <= 'F') || (s[i] >= '0' && s[i] <= '9'))
			i++;
		else if ((s[i] >= 'a' && s[i] <= 'f'))
			i++;
		else
		{
			ft_putstr("ERROR: COLLOR");
			exit(1);
		}
	}
}

int				ft_atoi_hex(char *s)
{
	int		i;
	int		res;

	ft_valid_color(s);
	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'f')
			s[i] = s[i] - 32;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 16 + (s[i] - 48);
		else if (s[i] >= 'A' && s[i] <= 'F')
			res = res * 16 + (s[i] - 55);
		i++;
	}
	return (res);
}
