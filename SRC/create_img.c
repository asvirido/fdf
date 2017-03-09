/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:11:39 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/09 16:22:22 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

t_img	*create_img(t_mlx *obj)
{
	t_img	*new;

	new = (t_img*)malloc(sizeof(t_img));
	new->bits = 0;
	new->size_line = 0;
	new->end = 0;
	new->img = mlx_new_image(obj->mlx, SIZE_X, SIZE_Y);
	new->line = CREATE_IMAGE(new->img, &new->bits, &new->size_line, &new->end);
	return (new);
}
