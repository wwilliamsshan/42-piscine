/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:10:50 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 15:49:53 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *argv, int i)
{
	int j;

	if ('a' <= argv[i] && argv[i] <= 'z')
	{
		j = 0;
		while (j <= (argv[i] - 'a'))
		{
			ft_putchar(argv[i]);
			j++;
		}
	}
	else if ('A' <= argv[i] && argv[i] <= 'Z')
	{
		j = 0;
		while (j <= (argv[i] - 'A'))
		{
			ft_putchar(argv[i]);
			j++;
		}
	}
	else
		ft_putchar(argv[i]);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{
		repeat_alpha(argv[1], i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
