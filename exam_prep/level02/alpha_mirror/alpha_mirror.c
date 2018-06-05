/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:08:43 by wshan             #+#    #+#             */
/*   Updated: 2018/06/04 20:20:39 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_lower_case(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int		is_upper_case(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

void	alpha_mirror(char *str)
{
	int		i;
	char	temp;

	i = 0;
	while (str[i])
	{
		if (is_lower_case(str[i]) == 1)
		{
			temp = 'z' - str[i] + 'a';
			ft_putchar(temp);
		}
		else if (is_upper_case(str[i]) == 1)
		{
			temp = 'Z' - str[i] + 'A';
			ft_putchar(temp);
		}
		else if (str[i] == ' ' || str[i] == '\t')
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
