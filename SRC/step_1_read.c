/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_1_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 16:44:37 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/02 11:11:23 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static char		*read_file(int fd, int len)
{
	char	*line;
	char	**mas;
	char	*res;
	char	*tmp;
	int		read_res;

	res = ft_strdup("\0");
	while ((read_res = get_next_line(fd, &line)) > 0)
	{
		mas = ft_strsplit(line, ' ');
		error_valid(mas, len, res);
		tmp = ft_strdup(res);
		free(res);
		res = ft_strjoin(tmp, " ");
		free(tmp);
		tmp = ft_strdup(res);
		free(res);
		res = ft_strjoin(tmp, line);
		free(line);
	}
	close(fd);
	return (res);
}

int				first_line_count_z(char *argv)
{
	char	*line;
	char	**mas;
	int		len;
	int		fd;
	int		res;

	fd = open_fd(argv);
	get_next_line(fd, &line);
	mas = ft_strsplit(line, ' ');
	len = 0;
	while (mas[len])
		len++;
	free(line);
	free(mas);
	while ((res = get_next_line(fd, &line)) > 0)
		free(line);
	close(fd);
	return (len);
}

char			**step_1_read(char *argv)
{
	int		len;
	int		fd;
	char	*line;
	char	**mas;

	len = first_line_count_z(argv);
	fd = open_fd(argv);
	line = read_file(fd, len);
	mas = ft_strsplit(line, ' ');
	free(line);
	return (mas);
}
