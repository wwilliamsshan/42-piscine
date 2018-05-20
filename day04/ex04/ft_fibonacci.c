/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 18:51:18 by wshan             #+#    #+#             */
/*   Updated: 2018/05/19 19:05:03 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putint(int a)
{
	printf("%d", a);
}

int		ft_fibonacci(int index)
{
	if (index == 0) 
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else 
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index-2));
	}
	return (0);	
}

int		main(void)
{
	ft_putint(ft_fibonacci(9));
	return (0);
}
