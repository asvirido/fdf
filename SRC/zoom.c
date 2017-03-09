/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 15:49:59 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/04 15:50:00 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	zoom(t_fdf fdf, int keycode)
{
	int		i;
	double	mult;

	mult = ((keycode == 69) ? 1.1 : 0.9);
	i = 0;
	while (i < fdf.size_map)
	{
		fdf.pix[i].z = fdf.pix[i].z * mult;
		fdf.pix[i].x = fdf.pix[i].x * mult;
		fdf.pix[i].y = fdf.pix[i].y * mult;
		i++;
	}
	fill_screen(fdf);
}
