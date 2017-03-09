/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:45:14 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/12 15:23:37 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int		result;
	int		minus;
	int		i;

	minus = 1;
	result = 0;
	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if ((s[i] == '-') || (s[i] == '+'))
	{
		if (s[i] == '-')
			minus = -1;
		i++;
	}
	while (ft_isdigit(s[i]) == 1)
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (minus * result);
}
