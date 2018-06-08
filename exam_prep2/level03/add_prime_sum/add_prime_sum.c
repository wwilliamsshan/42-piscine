/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 17:16:20 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 17:42:47 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int		is_prime_checker(int nb)
{
	int i;
	int flag;

	i = 2;
	flag = 0;
	while (i <= nb/2)
	{
		if (nb % i == 0)
		{
			flag = 1;
		}
		i++;
	}
	return (flag);
}

int		ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int		add_prime_sum(int a)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while (i <= a)
	{
		if (is_prime_checker(i) == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	return (sum);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	}
	else
	{
		ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
