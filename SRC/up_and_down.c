/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_and_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 17:21:01 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/06 17:21:02 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	up_and_down_z(t_fdf fdf, int keycode)
{
	int		i;
	double	mult;

	mult = ((keycode == 67) ? 1.1 : 0.9);
	i = 0;
	while (i < fdf.size_map)
	{
		fdf.pix[i].z = fdf.pix[i].z * mult;
		projection(fdf.pix, i);
		i++;
	}
	fill_screen(fdf);
}
