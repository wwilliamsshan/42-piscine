/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:35:29 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 11:47:38 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	i = 0;
	while (i < 8)
	{
		binary[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	i = 7;
	while (i >= 0)
	{
		if (binary[i] == 0)
		{
			write(1, "0", 1);
		}
		else if (binary[i] == 1)
		{
			write(1, "1", 1);
		}
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
