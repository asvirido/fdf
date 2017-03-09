/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_2_record.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 15:53:18 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/17 16:34:00 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static void		filling_color(int i, t_map *pix, char *s)
{
	int		j;
	int		color;
	int		red;
	int		green;
	int		blue;

	j = 0;
	if (s[j] == '0' && s[j + 1] == 'x')
		j = j + 2;
	if (j == 0)
		return ;
	color = ft_atoi_hex(&s[j]);
	red = (color >> 16);
	green = (color >> 8) - (red << 8);
	blue = (color) - (red << 16) - (green << 8);
	pix[i].red = red;
	pix[i].green = green;
	pix[i].blue = blue;
}

static void		filling(char **s, t_map *pix, double mult)
{
	double	x;
	double	y;
	int		i;
	int		j;

	i = 0;
	y = 0;
	x = 0;
	while (s[i] && i < pix->size_y * pix->size_x)
	{
		if (x == pix->size_x)
			y++;
		if (x == pix->size_x)
			x = 0;
		j = 0;
		pix[i].z = ((double)ft_atoi(&s[i][j])) * (mult / 2);
		pix[i].y = (y - pix->size_y / 2) * mult;
		pix[i].x = (x - pix->size_x / 2) * mult;
		while ((ft_isdigit(s[i][j])) == 1)
			j++;
		if (s[i][j] == ',')
			filling_color(i, pix, &s[i][++j]);
		i++;
		x++;
	}
}

static t_map	*create_pixel(char **s, int size)
{
	t_map		*new;
	int			len;
	int			i;
	double		mult;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	new = (t_map*)malloc(sizeof(t_map) * (len + 1));
	while (i <= len)
	{
		new[i].red = 255;
		new[i].green = 255;
		new[i].blue = 255;
		i++;
	}
	new->size_x = size;
	new->size_y = len / size;
	mult = (SIZE_Y - 350) / (double)((size > len / size) ? size : (len / size));
	filling(s, new, mult);
	return (new);
}

t_map			*step_2_record(char **s, int size)
{
	t_map		*new;

	new = create_pixel(s, size);
	return (new);
}
