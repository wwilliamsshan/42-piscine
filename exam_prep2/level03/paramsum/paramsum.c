/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:20:03 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 16:26:45 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putnbr(argc - 1);
	}
	ft_putchar('\n');
}
