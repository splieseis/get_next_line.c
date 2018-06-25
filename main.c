/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:34:31 by spliesei          #+#    #+#             */
/*   Updated: 2018/03/28 16:28:38 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/*
** gcc -o getline main.c -I./libft -L./libft -lft get_next_line.c
*/

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	argc = 2;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n", line);
	}
	free(line);
	return (0);
}
