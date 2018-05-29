/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <wshan@42.student.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 15:45:35 by wshan             #+#    #+#             */
/*   Updated: 2018/05/20 17:20:50 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	top_or_bottom(int x)
{
	int	counter;

	counter = 1;
	ft_putchar('A');
	while (counter < x - 1)
	{
		ft_putchar('B');
		counter = counter + 1;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	middle(int x)
{
	int counter;

	counter = 1;
	ft_putchar('B');
	while (counter < x - 1)
	{
		ft_putchar(' ');
		counter = counter + 1;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int counter;

	counter = 1;
	if (x >= 1)
	{
		top_or_bottom(x);
	}
	while (counter < y - 1)
	{
		middle(x);
		counter = counter + 1;
	}
	if (y > 1)
	{
		top_or_bottom(x);
	}
}
