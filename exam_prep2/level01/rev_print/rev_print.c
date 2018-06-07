/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 19:27:02 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 19:38:41 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

void	rev_print(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
