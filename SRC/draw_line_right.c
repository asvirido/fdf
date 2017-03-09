/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:17:20 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/03 15:17:21 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	draw_line_right(t_fdf fdf, int i)
{
	if (i % (int)fdf.pix->size_x != (int)fdf.pix->size_x - 1)
	{
		fdf.pix_line.x0 = fdf.pix[i].new_x;
		fdf.pix_line.x1 = fdf.pix[i + 1].new_x;
		fdf.pix_line.y0 = fdf.pix[i].new_y;
		fdf.pix_line.y1 = fdf.pix[i + 1].new_y;
		pixel_line(fdf.img, fdf.pix, i, fdf.pix_line);
	}
}
