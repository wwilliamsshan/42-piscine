/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 20:13:59 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 20:24:27 by wshan            ###   ########.fr       */
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

void	inter(char *str1, char *str2)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (str1[j])
	{
		while (str2[k])
		{
			if (str1[j] == str2[k] && (duplicate(str1, str1[j], j) == 0))
			{
				ft_putchar(str1[j]);
				break ;
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
