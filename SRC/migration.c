/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   migration.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 15:27:31 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/07 15:27:34 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	left(t_fdf fdf)
{
	int		i;

	i = 0;
	while (i < fdf.size_map)
	{
		fdf.pix[i].y = fdf.pix[i].y + 10;
		i++;
	}
	fill_screen(fdf);
}

void	right(t_fdf fdf)
{
	int		i;

	i = 0;
	while (i < fdf.size_map)
	{
		fdf.pix[i].x = fdf.pix[i].x + 10;
		i++;
	}
	fill_screen(fdf);
}

void	up(t_fdf fdf)
{
	int		i;

	i = 0;
	while (i < fdf.size_map)
	{
		fdf.pix[i].z = fdf.pix[i].z + 10;
		i++;
	}
	fill_screen(fdf);
}

void	down(t_fdf fdf)
{
	int		i;

	i = 0;
	while (i < fdf.size_map)
	{
		fdf.pix[i].z = fdf.pix[i].z - 10;
		i++;
	}
	fill_screen(fdf);
}

void	migration(t_fdf fdf, int keycode)
{
	if (keycode == 123)
		left(fdf);
	if (keycode == 124)
		right(fdf);
	if (keycode == 126)
		up(fdf);
	if (keycode == 125)
		down(fdf);
}
