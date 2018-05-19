/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <wshan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:20:43 by wshan             #+#    #+#             */
/*   Updated: 2018/05/19 16:40:08 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putint(int a)
{
	printf("%d", a);
}

int		ft_iterative_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	int i;
	int result;

	i = 1;
	result = 1;
	while (i <= power)
	{
		result = result * nb;
		i =  i + 1;
	}
	return (result);
}

int		main(void)
{
	ft_putint(ft_iterative_power(2, 3));
	return (0);
}
