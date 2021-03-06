/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:02:25 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 21:20:07 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				power(int base, int power)
{
	int	i;
	int result;

	result = base;
	i = 1;
	while (i < power)
	{
		result = result * base;
		i++;
	}
	return (result);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	result;
	unsigned char	binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	i = 0;
	if (octet == 0)
	{
		return (octet);
	}
	while (octet > 0)
	{
		binary[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	i = 0;
	while (i <= 7)
	{
		result = result + binary[i] * power(2, 7 - i);
		i++;
	}
	return (result);
}

int				main(void)
{
	unsigned char octet;

	octet = 38;
	printf("%d", reverse_bits(octet));
	return (0);
}
