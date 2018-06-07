/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 12:12:31 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 12:29:00 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		unique(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (s1[j])
	{
		if (unique(s1, s1[j], j) == 1)
		{
			ft_putchar(s1[j]);
		}
		j++;
	}
	while (s2[k])
	{
		if (unique(s2, s2[k], k) == 1 && unique(s1, s2[k], j) == 1)
		{
			ft_putchar(s2[k]);
		}
		k++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
