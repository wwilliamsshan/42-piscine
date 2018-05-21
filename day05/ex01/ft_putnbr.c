/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:58:41 by wshan             #+#    #+#             */
/*   Updated: 2018/05/21 13:40:10 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= -10)
	{
		ft_putchar('-');
		ft_putnbr((-1 * nb)/10);
		ft_putchar(((-1 * nb) % 10) + 48);
	}
	else if (-10 < nb && nb < 0)
	{
		ft_putchar('-');
		ft_putchar((-1 * nb) + 48);
	}
	else if (0 <= nb &&  nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else if (10 <= nb)
	{
		ft_putnbr(nb/10);
		ft_putchar((nb % 10) + 48);
	}
}

int		main(void)
{
	ft_putnbr(-120823);
	return (0);
}
