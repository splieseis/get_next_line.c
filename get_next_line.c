/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 16:19:29 by spliesei          #+#    #+#             */
/*   Updated: 2018/01/30 16:15:00 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_return(char **line)
{
	if (!*line[0])
		return (0);
	return (1);
}

char	*ft_strchrn(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	if (s[i] == c)
		return ((char *)&s[i + 1]);
	else
		return (NULL);
}

int		ft_copy_buf(char **line, char **buf, int fd)
{
	char	*tmp;
	int		i;

	tmp = *line;
	*line = ft_strnjoin(tmp, buf[fd], (ft_strlen(buf[fd]) -
	ft_strlen(ft_strchr(buf[fd], '\n'))));
	free(tmp);
	i = 0;
	if (ft_strlen(ft_strchr(buf[fd], '\n')))
		i = 1;
	tmp = buf[fd];
	buf[fd] = ft_strdup(ft_strchrn(tmp, '\n'));
	free(tmp);
	if (i == 1)
		return (1);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	*buf[2147483648];
	int			ret;

	ret = 1;
	if (!line || fd < 0)
		return (-1);
	*line = ft_strnew(1);
	while (ret != -1)
	{
		if (!buf[fd])
		{
			buf[fd] = ft_strnew(BUFF_SIZE);
			if ((ret = read(fd, buf[fd], BUFF_SIZE)) == -1)
				return (-1);
		}
		if (ft_copy_buf(line, buf, fd))
			return (1);
		if (ret == 0)
			return (ft_return(line));
	}
	return (-1);
}
