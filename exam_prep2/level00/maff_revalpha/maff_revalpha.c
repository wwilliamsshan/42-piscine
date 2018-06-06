/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:57:44 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 16:02:51 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char z;
	char Y;

	z = 'z';
	Y = 'Y';
	while (z >= 'a' && Y >= 'A')
	{
		ft_putchar(z);
		ft_putchar(Y);
		z = z - 2;
		Y = Y - 2;
	}
	ft_putchar('\n');
	return (0);
}
