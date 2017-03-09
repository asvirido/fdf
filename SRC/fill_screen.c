/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_screen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 17:53:46 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/16 19:47:49 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	put_string_screen(t_fdf fdf)
{
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 10, 0x00FF00, "Rotation X:");
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 130, 10, 0xadd8e6, STRING_1);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 40, 0x00FF00, "Rotation Y:");
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 130, 40, 0xadd8e6, STRING_2);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 70, 0x00FF00, "Rotation Z:");
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 130, 70, 0xadd8e6, STRING_3);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 100, 0x00FF00, "ZOOM:");
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 60, 100, 0xadd8e6, " '+' '-'");
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 130, 0x00FF00, STRING_4);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 150, 130, 0xadd8e6, "ArrowUp");
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 160, 0x00FF00, STRING_5);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 160, 160, 0xadd8e6, STRING_6);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 190, 0x00FF00, STRING_7);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 160, 190, 0xadd8e6, STRING_8);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 220, 0x00FF00, STRING_9);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 170, 220, 0xadd8e6, STRING_10);
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 10, 250, 0x00FF00, "Change Z:");
	mlx_string_put(fdf.obj->mlx, fdf.obj->win, 100, 250, 0xadd8e6, STRING_11);
}

void	fill_screen(t_fdf fdf)
{
	int			i;

	i = 0;
	while (i < fdf.size_map)
	{
		projection(fdf.pix, i);
		i++;
	}
	fdf.img = create_img(fdf.obj);
	draw(fdf);
	mlx_put_image_to_window(fdf.obj->mlx, fdf.obj->win, fdf.img->img, 0, 0);
	put_string_screen(fdf);
	free(fdf.img);
}
