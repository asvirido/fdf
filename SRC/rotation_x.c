/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 17:35:49 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/06 17:35:50 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	rotation_x_forward(t_fdf fdf)
{
	int		i;
	double	y;
	double	z;

	i = 0;
	while (i < fdf.size_map)
	{
		y = fdf.pix[i].y * cos(10 * RAD) + fdf.pix[i].z * sin(10 * RAD);
		z = -fdf.pix[i].y * sin(10 * RAD) + fdf.pix[i].z * cos(10 * RAD);
		fdf.pix[i].y = y;
		fdf.pix[i].z = z;
		i++;
	}
	fill_screen(fdf);
}

void	rotation_x_back(t_fdf fdf)
{
	int		i;
	double	y;
	double	z;

	i = 0;
	while (i < fdf.size_map)
	{
		y = fdf.pix[i].y * cos(10 * RAD) - fdf.pix[i].z * sin(10 * RAD);
		z = fdf.pix[i].y * sin(10 * RAD) + fdf.pix[i].z * cos(10 * RAD);
		fdf.pix[i].y = y;
		fdf.pix[i].z = z;
		i++;
	}
	fill_screen(fdf);
}

void	rotation_x(t_fdf fdf, int keycode)
{
	if (keycode == 12)
		rotation_x_forward(fdf);
	else
		rotation_x_back(fdf);
}
