/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:26:25 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 16:35:37 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *str, char *orig, char *repl)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == orig[0])
		{
			ft_putchar(repl[0]);
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
	if (argc != 4)
	{
		ft_putchar('\n');
	}
	else
	{
		while ('a' <= argv[2][0] && argv[2][0] <= 'z'
				&& 'A' <= argv[3][0] && argv[3][0] <= 'Z')
		{
			search_and_replace(argv[1], argv[2], argv[3]);
			ft_putchar('\n');
		}
	}
	return (0);
}
