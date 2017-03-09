/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:00:34 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 16:36:26 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H
# define SIZE_Y 800
# define SIZE_X	800
# define RAD 3.14 / 180.0
# define X pix[i].x
# define Y pix[i].y
# define Z pix[i].z
# define CREATE_IMAGE mlx_get_data_addr
# define STRING_1 "forward 'Q' back 'A'"
# define STRING_2 "forward 'W' back 'S'"
# define STRING_3 "forward 'E' back 'D'"
# define STRING_4 "Migration Up:"
# define STRING_5 "Migration Down:"
# define STRING_6 " ArrowDown"
# define STRING_7 "Migration Left:"
# define STRING_8 " ArrowLeft"
# define STRING_9 "Migration Right:"
# define STRING_10 " ArrowRight"
# define STRING_11 " up '*' down '/'"
# define ABS(x) ((x) > 0 ? (x) : -(x))
# include <stdlib.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <fcntl.h>
# include <mlx.h>
# include <math.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct	s_map
{
	double	z;
	double	y;
	double	x;
	double	new_x;
	double	new_y;
	int		red;
	int		green;
	int		blue;
	double	size_y;
	double	size_x;
}				t_map;

typedef struct	s_pix_line
{
	double x;
	double y;
	double x0;
	double x1;
	double y0;
	double y1;
}				t_pix_line;

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
}				t_mlx;

typedef struct	s_img
{
	int		bits;
	int		size_line;
	int		end;
	char	*line;
	void	*img;
}				t_img;

typedef	struct	s_fdf
{
	t_mlx		*obj;
	t_img		*img;
	t_pix_line	pix_line;
	t_map		*pix;
	int			size_map;
}				t_fdf;

void			usage_error(void);
int				open_fd(char *argv);
void			error_valid(char **mas, int len, char *res);
char			**step_1_read(char *argv);
int				first_line_count_z(char *argv);
t_map			*step_2_record(char **s, int size);
int				ft_atoi_hex(char *s);
t_mlx			*object_mlx(void);
t_img			*create_img(t_mlx *obj);
int				update(int keycode, t_fdf *tmp);
void			fill_screen(t_fdf fdf);
void			zoom(t_fdf fdf, int keycode);
void			right(t_fdf fdf);
void			projection(t_map *pix, int i);
void			up_and_down_z(t_fdf fdf, int keycode);
void			rotation_x(t_fdf fdf, int keycode);
void			rotation_z(t_fdf fdf, int keycode);
void			rotation_y(t_fdf fdf, int keycode);
void			migration(t_fdf fdf, int keycode);
void			draw(t_fdf fdf);
void			draw_line_right(t_fdf fdf, int i);
void			draw_line_down(t_fdf fdf, int i);
void			pixel_line(t_img *img, t_map *pix, int i, t_pix_line line);
#endif
