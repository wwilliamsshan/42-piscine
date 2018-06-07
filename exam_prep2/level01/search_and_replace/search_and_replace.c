/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:35:25 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 18:51:32 by wshan            ###   ########.fr       */
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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	search_and_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
		{
			str[i] = b;
		}
		i++;
	}
	ft_putstr(str);
}

int		is_alphabet(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1
		&& is_alphabet(argv[2][0]) == 1 && is_alphabet(argv[3][0]) == 1)
	{
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
		ft_putchar('\n');
	}
	return (0);
}
