/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:22:20 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 21:33:24 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		duplicate(char *str, char c, int pointer)
{
	int i;

	i = 0;
	while (i < pointer)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (str1[j])
	{
		if (duplicate(str1, str1[j], j) == 0)
		{
			ft_putchar(str1[j]);
		}
		j++;
	}
	while (str2[k])
	{
		if (duplicate(str2, str2[k], k) == 0 && duplicate(str1, str2[k], j) == 0)
		{
			ft_putchar(str2[k]);
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
