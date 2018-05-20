/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 13:13:08 by wshan             #+#    #+#             */
/*   Updated: 2018/05/20 14:37:14 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rush03(int x, int y)
{
	int ix;
	int iy;

	if (x < 1 || y < 1)
	{
		ft_putchar('X');
		return (0);
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		return (0);
	}
	ft_putchar('A');
	ix = -1;
	while (ix < x - 3)
	{
		ft_putchar('B');
		ix = ix + 1;
	}
	if (x != 1)
	{
		ft_putchar('C');
	}
	iy = -1;
	while (iy < y - 3)
	{
		ft_putchar('\n');
		ft_putchar('B');
		ix = -1;
		while (ix < x - 3)
		{
			ft_putchar(' ');
			ix = ix + 1;
		}
		if (x != 1)
		{
			ft_putchar('B');
		}
		iy = iy + 1;	
	}	
	if (y != 1)
	{
		ft_putchar('\n');
		ft_putchar('A');
		ix = -1;
		while (ix < x - 3)
		{
			ft_putchar('B');
			ix = ix + 1;
		}
		if (x != 1)
		{
			ft_putchar('C');
		}
	}
	ft_putchar('\n');
	return (0);
}

int		main(void)
{
	rush03(4, 4);
	return (0);
}
