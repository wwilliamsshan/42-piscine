/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:53:05 by wshan             #+#    #+#             */
/*   Updated: 2018/05/31 19:29:56 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_cat(int argc, char **argv)
{
	int			i;
	int			fd;
	char		buffer;
	struct stat sb;

	i = 1;
	if (stat(argv[i], &sb) == 0 && S_ISDIR(sb.st_mode))
	{
		ft_putstr("cat: ");
		ft_putstr(argv[i]);
		ft_putstr(" Is a directory\n");
	}
	else
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd >= 0)
			{
				while ((read(fd, &buffer, 1)) != 0)
					write(1, &buffer, 1);
			}
			else
				ft_putstr(strerror(errno));
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	char	buffer;

	if (argc < 2 || argv[1][0] == '-')
	{
		while (read(0, &buffer, 1) != 0)
		{
			write(1, &buffer, 1);
		}
	}
	else if (argc >= 2)
	{
		ft_cat(argc, argv);
	}
	return (0);
}
