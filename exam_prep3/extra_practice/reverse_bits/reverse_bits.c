/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:48:05 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 12:04:54 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		power(int base, int power)
{
	int i;
	int result;

	i = 1;
	result = base;
	while (i < power)
	{
		result = result * base;
		i++;
	}
	return (result);
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	unsigned char	new;
	int i;

	i = 0;
	while (i < 8)
	{
		binary[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	i = 0;
	new = 0;
	while (i < 8)
	{
		new = new + binary[i] * (power(2, 7 - i));
		i++;
	}
	return (new);
}

int		main(void)
{
	unsigned char octet;

	octet = 38;
	printf("%d", reverse_bits(octet));
	return (0);
}
