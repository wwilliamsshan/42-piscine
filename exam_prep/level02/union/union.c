/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 18:57:30 by wshan             #+#    #+#             */
/*   Updated: 2018/06/04 19:44:46 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		unique(char c, char *str, int pos)
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

void	ft_union(char *str1, char *str2)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (str1[j])
	{
		if (unique(str1[j], str1, j) == 1)
		{
			ft_putchar(str1[j]);
		}
		j++;
	}
	while (str2[k])
	{
		if (unique(str2[k], str2, k) == 1 && unique(str2[k], str1, j) == 1)
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
