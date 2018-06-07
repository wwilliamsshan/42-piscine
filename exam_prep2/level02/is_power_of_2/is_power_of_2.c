/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:59:37 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 23:24:25 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
	{
		return (1);
	}
	return (0);
}

int		main(void)
{
	unsigned int a;

	a = 17;
	printf("%d", is_power_of_2(a));
	return (0);
}
