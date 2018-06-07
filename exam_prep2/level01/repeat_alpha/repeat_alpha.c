/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:24:59 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 18:34:41 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;
	int j;
	int k;
	
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			while (j <= (str[i] - 'a'))
			{
				ft_putchar(str[i]);
				j++;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (k <= (str[i] - 'A'))
			{
				ft_putchar(str[i]);
				k++;
			}
		}
		j = 0;
		k = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
