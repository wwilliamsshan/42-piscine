/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <wshan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 12:40:02 by wshan             #+#    #+#             */
/*   Updated: 2018/05/19 16:03:56 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putint(int a)
{
	printf("%d", a);
	return (0);
}

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb = nb - 1;
	}
	ft_putint(result);
	return (0);
}

int		main(void)
{
	ft_iterative_factorial(4);
	return (0);
}
