/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 19:02:49 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 19:21:14 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_alphabet(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c == ' ' || c == '\t')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] && is_alphabet(str[i]) == 0)
	{
		i++;
	}
	while (str[i] && is_alphabet(str[i]) == 1)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
