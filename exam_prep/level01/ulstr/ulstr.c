/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:36:18 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 16:47:24 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int diff;

	i = 0;
	diff = 'a' - 'A';
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			ft_putchar((argv[1][i]) - diff);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			ft_putchar((argv[1][i]) + diff);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
