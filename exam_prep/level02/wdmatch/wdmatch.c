/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:59:05 by wshan             #+#    #+#             */
/*   Updated: 2018/06/05 13:42:00 by wshan            ###   ########.fr       */
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

void	wdmatch(char *str1, char *str2)
{
	int len;
	int i;
	int count;

	len = 0;
	while (str1[len])
	{
		len++;
	}
	i = 0;
	count = 1;
	while (str2[i])
	{
		if (str2[i] == str1[count])
		{
			count++;
		}
		i++;
	}
	if (len == count)
	{
		ft_putstr(str1);
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
