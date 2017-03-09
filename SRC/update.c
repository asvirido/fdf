/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:34:28 by asvirido          #+#    #+#             */
/*   Updated: 2017/01/28 17:04:10 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		update(int keycode, t_fdf *tmp)
{
	if (keycode == 53)
		exit(1);
	if (keycode == 69 || keycode == 78)
		zoom(*tmp, keycode);
	if (keycode == 67 || keycode == 75)
		up_and_down_z(*tmp, keycode);
	if (keycode == 12 || keycode == 0)
		rotation_x(*tmp, keycode);
	if (keycode == 13 || keycode == 1)
		rotation_y(*tmp, keycode);
	if (keycode == 14 || keycode == 2)
		rotation_z(*tmp, keycode);
	if (keycode == 123 || keycode == 124 || keycode == 126 || keycode == 125)
		migration(*tmp, keycode);
	return (1);
}
