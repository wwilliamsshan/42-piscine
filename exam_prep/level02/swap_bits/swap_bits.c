/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 21:22:20 by wshan             #+#    #+#             */
/*   Updated: 2018/06/05 21:40:49 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	temp1 = octet << 4;
	unsigned char	temp2 = octet >> 4;

	return (temp1 + temp2);
}

int		main(void)
{
	unsigned char	octet;

	octet = 65;
	printf("%d", swap_bits(octet));
	return (0);
}
