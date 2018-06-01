/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:21:17 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 16:24:14 by wshan            ###   ########.fr       */
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

void	rotone(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if ('a' <= argv[i] && argv[i] <= 'y')
		{
			ft_putchar(argv[i] + 1);
		}
		else if (argv[i] == 'z')
		{
			ft_putchar(argv[i] - 25);
		}
		else if ('A' <= argv[i] && argv[i] <= 'Y')
		{
			ft_putchar(argv[i] + 1);
		}
		else if (argv[i] == 'Z')
		{
			ft_putchar(argv[i] - 25);
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
		rotone(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
