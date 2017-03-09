/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_z.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 17:48:00 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 16:35:54 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	rotation_z_forward(t_fdf fdf)
{
	int		i;
	double	x;
	double	y;

	i = 0;
	while (i < fdf.size_map)
	{
		x = fdf.pix[i].x * cos(10 * RAD) + fdf.pix[i].y * sin(10 * RAD);
		y = -fdf.pix[i].x * sin(10 * RAD) + fdf.pix[i].y * cos(10 * RAD);
		fdf.pix[i].x = x;
		fdf.pix[i].y = y;
		i++;
	}
	fill_screen(fdf);
}

void	rotation_z_back(t_fdf fdf)
{
	int		i;
	double	x;
	double	y;

	i = 0;
	while (i < fdf.size_map)
	{
		x = fdf.pix[i].x * cos(10 * RAD) - fdf.pix[i].y * sin(10 * RAD);
		y = fdf.pix[i].x * sin(10 * RAD) + fdf.pix[i].y * cos(10 * RAD);
		fdf.pix[i].x = x;
		fdf.pix[i].y = y;
		i++;
	}
	fill_screen(fdf);
}

void	rotation_z(t_fdf fdf, int keycode)
{
	if (keycode == 14)
		rotation_z_forward(fdf);
	else
		rotation_z_back(fdf);
}
