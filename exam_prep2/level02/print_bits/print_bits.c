/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:05:43 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 22:24:01 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int		i;
	unsigned char	temp[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	i = 0;
	while (octet > 0)
	{
		temp[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	i = 7;
	while (i >= 0)
	{
		ft_putchar(temp[i]);
		i--;
	}
}

int		main(void)
{
	unsigned char octet;

	octet = 2;
	print_bits(octet);
	return (0);
}
