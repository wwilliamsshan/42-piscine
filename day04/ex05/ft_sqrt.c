/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <wshan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:31:24 by wshan             #+#    #+#             */
/*   Updated: 2018/05/19 20:02:59 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putint(int a)
{
	printf("%d", a);
}

int		ft_sqrt(int nb)
{
	int root;

	if (nb < 1)
	{
		return (0);
	}
	root = 1;
	while (root < nb)
	{
		if (root * root == nb)
		{
			return (root);
		}
		else
		{
			root = root + 1;
		}
	}
	return (0);
}

int		main(void)
{
	ft_putint(ft_sqrt(10));
	return (0);
}
