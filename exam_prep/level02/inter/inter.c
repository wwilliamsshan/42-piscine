/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:39:39 by wshan             #+#    #+#             */
/*   Updated: 2018/06/04 15:49:45 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, char c, 1);
}

int		duplicate(char c, char *str, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (c == s1[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (s1[j])
	{
		while (s2[k])
		{
			if (s1[j] == s2[k])
			{
				if (duplicate(s1[i], s1, i) == 0)
				{
					ft_putchar(s1[i]);
					break ;
				}
			}
			k++;
		}
		k = 0;
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
