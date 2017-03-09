/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 13:44:24 by asvirido          #+#    #+#             */
/*   Updated: 2017/01/19 16:47:34 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_cat(t_line *s1, char *buf, int fd)
{
	char	*new;

	if (s1[FD].tmp == NULL)
		new = ft_strdup(buf);
	else
		new = ft_strjoin(s1[FD].tmp, buf);
	free(s1[FD].tmp);
	return (new);
}

static int		fill(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static int		check_n(t_line *s, const int fd, char **line)
{
	char		*new;
	int			i;

	if (s[FD].tmp == NULL)
		return (-2);
	i = fill(s[FD].tmp);
	if (i == -1)
		return (-2);
	else
	{
		s[FD].tmp[i++] = '\0';
		free(*line);
		*line = ft_strdup(s[FD].tmp);
		new = ft_strdup(&s[FD].tmp[i]);
		free(s[FD].tmp);
		s[FD].tmp = ft_strdup(new);
		free(new);
		return (LINE);
	}
}

static int		read_file(t_line *s, const int fd, char **line, char *buf)
{
	int		res;
	char	*new;
	int		i;

	while (((res = read(fd, buf, BUFF_SIZE)) != 0) && res != -1)
	{
		i = fill(buf);
		if (i == -1)
			s[FD].tmp = ft_cat(s, buf, fd);
		else
		{
			s[FD].tmp = ft_cat(s, buf, fd);
			i = fill(s[FD].tmp);
			s[FD].tmp[i++] = '\0';
			free(*line);
			*line = ft_strdup(s[FD].tmp);
			new = ft_strdup(&s[FD].tmp[i]);
			free(s[FD].tmp);
			s[FD].tmp = ft_strdup(new);
			free(new);
			return (LINE);
		}
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	return (res);
}

int				get_next_line(const int fd, char **line)
{
	static t_line	s[4864];
	char			buf[BUFF_SIZE + 1];

	ft_bzero(buf, BUFF_SIZE + 1);
	if (line == (void*)0)
		return (ERROR);
	*line = ft_strdup("\0");
	if (fd < 0)
		return (ERROR);
	if ((s[FD].define = check_n(s, fd, line)) == LINE)
		return (LINE);
	s[FD].define = read_file(s, fd, line, buf);
	if (s[FD].define == END && s[FD].tmp != NULL && s[FD].tmp[0] != '\0')
	{
		*line = ft_strdup(s[FD].tmp);
		free(s[FD].tmp);
		s[FD].tmp = NULL;
		return (LINE);
	}
	return (s[FD].define);
}
