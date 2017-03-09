/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 15:59:40 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/02 11:08:54 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000000
# define ERROR -1
# define END 0
# define LINE 1
# define FD fd % 4864
# include "libft.h"
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

int					get_next_line(const int fd, char **line);
typedef struct		s_line
{
	char			*tmp;
	int				define;
}					t_line;
#endif
