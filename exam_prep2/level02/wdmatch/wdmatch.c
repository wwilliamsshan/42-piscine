/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:45:42 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 21:57:35 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int		j;
	int		k;
	int		count;
	char	len;

	j = 0;
	k = 0;
	count = 0;
	len = 0;
	while (s1[len])
	{
		len++;
	}
	while (s1[j])
	{
		while (s2[k])
		{
			if (s1[j] == s2[k])
			{
				count++;
				break ;
			}
			k++;
		}
		j++;
	}
	if (count == len)
	{
		ft_putstr(s1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
