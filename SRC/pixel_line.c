/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:04:05 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/02 17:32:11 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static void		ft_fill_line(t_map *pix, t_img *img, int i, t_pix_line line)
{
	int		x;

	if ((int)line.y >= 0 && (int)line.x >= 0)
		if ((int)line.y < SIZE_Y && (int)line.x < SIZE_X)
		{
			x = (int)line.y * img->size_line + (int)line.x * 4;
			if (x < SIZE_Y * SIZE_X * 4)
			{
				img->line[x] = pix[i].blue;
				img->line[x + 1] = pix[i].green;
				img->line[x + 2] = pix[i].red;
			}
		}
}

void			pixel_line(t_img *img, t_map *pix, int i, t_pix_line line)
{
	line.x = line.x0;
	line.y = line.y0;
	while (ABS(line.y - line.y1) > 0.9)
	{
		ft_fill_line(pix, img, i, line);
		line.x += (line.x1 - line.x0) / ABS(line.y1 - line.y0);
		line.y += (line.y1 > line.y0) ? 1 : -1;
	}
	line.x = line.x0;
	line.y = line.y0;
	while (ABS(line.x - line.x1) > 0.9)
	{
		ft_fill_line(pix, img, i, line);
		line.y += (line.y1 - line.y0) / ABS(line.x1 - line.x0);
		line.x += (line.x1 > line.x0) ? 1 : -1;
	}
	ft_fill_line(pix, img, i, line);
}
