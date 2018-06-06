/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 18:29:40 by wshan             #+#    #+#             */
/*   Updated: 2018/06/05 19:07:23 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char 	binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	i = 0;
	if (octet == 0)
	{
		return ;
	}
	while (octet > 0)
	{
		binary[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	i = 7;
	while (i >= 0)
	{
		printf("%d", binary[i]);
		i--;
	}
}

int		main(void)
{
	unsigned char octet;

	octet = 12;
	print_bits(octet);
	return (0);
}
