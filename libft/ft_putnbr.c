/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:18:43 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/09 02:03:23 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	new;

	if (n < 0)
	{
		new = -n;
		ft_putchar('-');
	}
	else
		new = n;
	if (new >= 10)
	{
		ft_putnbr(new / 10);
		ft_putchar(new % 10 + '0');
	}
	else
		ft_putchar(new + '0');
}
