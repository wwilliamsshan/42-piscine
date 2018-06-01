/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:00:57 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 16:19:23 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	rot_13(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if ('a' <= argv[i] && argv[i] <= 'm')
		{
			ft_putchar(argv[i] + 13);
		}
		else if ('n' <= argv[i] && argv[i] <= 'z')
		{
			ft_putchar(argv[i] - 13);
		}
		else if ('A' <= argv[i] && argv[i] <= 'M')
		{
			ft_putchar(argv[i] + 13);
		}
		else if ('N' <= argv[i] && argv[i] <= 'Z')
		{
			ft_putchar(argv[i] - 13);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		rot_13(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
