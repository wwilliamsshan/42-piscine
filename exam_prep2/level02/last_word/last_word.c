/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 20:24:53 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 21:01:44 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_alphabet(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int		space_count(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && (is_alphabet(str[i + 1]) == 1))
		{
			count++;
		}
		i++;
	}
	return (count);
}

void	last_word(char *str)
{
	int i;
	int k;
	int count;
	int count2;

	i = 0;
	k = 0;
	count = space_count(str);
	count2 = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && (is_alphabet(str[i + 1]) == 1))
		{
			count2++;
		}
		if ((str[i] == ' ' || str[i] == '\t') && (is_alphabet(str[i + 1]) == 1 &&
			count2 == count))
		{
			k = i + 1;
			while (str[k] && str[k] != ' ' && str[k] != '\t')
			{
				ft_putchar(str[k]);
				k++;
			}
		}
		i++;
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
