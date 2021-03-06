/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:23:05 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 14:38:59 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char c;

	c = '9';
	while ('0' <= c && c <= '9')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
	return (0);
}
