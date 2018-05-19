/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <wshan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:58:32 by wshan             #+#    #+#             */
/*   Updated: 2018/05/19 16:04:10 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_putint(int a)
{
	printf("%d", a);
}

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb  > 12)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}	
	else if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

int		main(void)
{
	ft_putint(ft_recursive_factorial(5));
	return (0);
}
