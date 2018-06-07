/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:52:19 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 18:56:52 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int i;
	int diff;

	i = 0;
	diff = 'a' - 'A';
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] - diff);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar(str[i] + diff);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ulstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
