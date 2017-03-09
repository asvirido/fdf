/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:16:19 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/16 19:47:16 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static double	ft_angle_cos(double x, double y)
{
	double		res;

	if ((x < 0 && y < 0) || (x > 0 && y > 0))
		res = cos(60 * RAD);
	else
		res = cos(120 * RAD);
	return (res);
}

static double	ft_beta(double x, double y)
{
	double	res;

	if ((x > 0 && y > 0) || (x < 0 && y > 0))
		res = (7 * 3.1415) / 6;
	if ((x < 0 && y < 0) || (x > 0 && y < 0))
		res = 3.1415 / 6;
	return (res);
}

void			projection(t_map *pix, int i)
{
	double	l;
	double	f;
	double	angle;
	double	beta;

	if (Y == 0)
		Y = 0.1;
	if (X == 0)
		X = 0.1;
	angle = ft_angle_cos(X, Y);
	beta = ft_beta(X, Y);
	l = sqrt((X * X) + (Y * Y) - 2 * fabs(X) * fabs(Y) * angle);
	if ((X > 0 && Y > 0) || (X < 0 && Y < 0))
		f = acos((Y * Y + l * l - X * X) / (2 * fabs(Y) * l)) + beta;
	else
		f = beta - acos((Y * Y + l * l - X * X) / (2 * fabs(Y) * l));
	pix[i].new_x = l * cos(f) + SIZE_X / 2;
	pix[i].new_y = -l * sin(f) - Z + SIZE_Y / 2;
}
