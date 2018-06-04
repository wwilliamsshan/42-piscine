/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:52:31 by wshan             #+#    #+#             */
/*   Updated: 2018/06/04 16:47:11 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int	j;
	int	k;
	int count1;
	int count2;

	j = 0;
	count1 = 0;
	while (str[j])
	{
		if ((str[j] == ' ' || str[j] == '\t') &&
			((str[j + 1] >= 'a' && str[j + 1] <= 'z') ||
			(str[j + 1] >= 'A' && str[j + 1] <= 'Z')))
		{
			count1++;
		}
		j++;
	}
	j = 0;
	k = 0;
	count2 = 0;
	while (str[j])
	{
		if ((str[j] == ' ' || str[j] == '\t') &&
			((str[j + 1] >= 'a' && str[j + 1] <= 'z') ||
			(str[j + 1] >= 'A' && str[j + 1] <= 'Z')))
		{
			count2++;
		}
		if ((str[j] == ' ' || str[j] == '\t') &&
			((str[j + 1] >= 'a' && str[j + 1] <= 'z') ||
			(str[j + 1] >= 'A' && str[j + 1] <= 'Z')) &&
			(count2 == count1))
		{
			k = j + 1;
			while (str[k])
			{
				ft_putchar(str[k]);
				k++;
			}
		}
		else if (count1 == 0)
		{
			while (str[k])
			{
				ft_putchar(str[k]);
				k++;
			}
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
