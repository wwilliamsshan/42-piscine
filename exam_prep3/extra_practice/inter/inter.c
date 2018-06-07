/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 12:05:17 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 12:12:08 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		duplicate(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_inter(char *s1, char *s2)
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
				if (duplicate(s1, s1[j], j) == 0)
				{
					ft_putchar(s1[j]);
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
		ft_inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
