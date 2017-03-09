/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line_down.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:17:15 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/03 15:17:16 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	draw_line_down(t_fdf fdf, int i)
{
	if (i < (fdf.size_map - (int)fdf.pix->size_x))
	{
		fdf.pix_line.x0 = fdf.pix[i].new_x;
		fdf.pix_line.x1 = fdf.pix[i + (int)fdf.pix->size_x].new_x;
		fdf.pix_line.y0 = fdf.pix[i].new_y;
		fdf.pix_line.y1 = fdf.pix[i + (int)fdf.pix->size_x].new_y;
		pixel_line(fdf.img, fdf.pix, i, fdf.pix_line);
	}
}
