/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:58:50 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/16 19:45:31 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		main(int argc, char **argv)
{
	char		**coordinates;
	int			size;
	t_fdf		fdf;

	if (argc != 2)
		usage_error();
	coordinates = step_1_read(argv[1]);
	size = first_line_count_z(argv[1]);
	fdf.pix = step_2_record(coordinates, size);
	fdf.obj = object_mlx();
	fdf.size_map = (int)fdf.pix->size_y * (int)fdf.pix->size_x;
	fill_screen(fdf);
	mlx_hook(fdf.obj->win, 2, 5, update, &fdf);
	mlx_loop(fdf.obj->mlx);
	return (0);
}
