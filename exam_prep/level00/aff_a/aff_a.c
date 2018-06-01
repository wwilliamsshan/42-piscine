/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:27:51 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 12:56:35 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aff_a(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			ft_putchar(argv[1][i]);
			ft_putchar('\n');
			return ;
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
	{
		ft_aff_a(argv);
	}
	return (0);
}
