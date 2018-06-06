/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:33:01 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 13:46:27 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('a');
	}
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar(argv[1][i]);
				break ;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
