/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 16:52:30 by asvirido          #+#    #+#             */
/*   Updated: 2017/01/19 16:29:29 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	usage_error(void)
{
	ft_putendl("Usage: ./fdf filename");
	exit(0);
}

void	error_valid(char **mas, int len, char *res)
{
	int		lenght;

	lenght = 0;
	while (mas[lenght])
		lenght++;
	if (len != lenght)
	{
		ft_putendl("ERROR: INVALID");
		free(res);
		free(*mas);
		exit(0);
	}
	else
		free(*mas);
}
