/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:21:14 by wshan             #+#    #+#             */
/*   Updated: 2018/05/31 16:40:26 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(int fd)
{
	char buffer;

	while (read(fd, &buffer, 1) != 0)
	{
		write (1, &buffer, 1);
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		if (argc > 2)
		{
			write(2, "Too many arguments.\n", 20);
		}
		if (argc < 2)
		{
			write(2, "File name missing.\n", 19);
		}
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	ft_display_file(fd);
	close(fd);
	return (0);
}
