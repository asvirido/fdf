/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 17:47:44 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/06 17:47:45 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	rotation_y_forward(t_fdf fdf)
{
	int		i;
	double	x;
	double	z;

	i = 0;
	while (i < fdf.size_map)
	{
		x = fdf.pix[i].x * cos(10 * RAD) + fdf.pix[i].z * sin(10 * RAD);
		z = -fdf.pix[i].x * sin(10 * RAD) + fdf.pix[i].z * cos(10 * RAD);
		fdf.pix[i].x = x;
		fdf.pix[i].z = z;
		i++;
	}
	fill_screen(fdf);
}

void	rotation_y_back(t_fdf fdf)
{
	int		i;
	double	x;
	double	z;

	i = 0;
	while (i < fdf.size_map)
	{
		x = fdf.pix[i].x * cos(10 * RAD) - fdf.pix[i].z * sin(10 * RAD);
		z = fdf.pix[i].x * sin(10 * RAD) + fdf.pix[i].z * cos(10 * RAD);
		fdf.pix[i].x = x;
		fdf.pix[i].z = z;
		i++;
	}
	fill_screen(fdf);
}

void	rotation_y(t_fdf fdf, int keycode)
{
	if (keycode == 13)
		rotation_y_forward(fdf);
	else
		rotation_y_back(fdf);
}
