/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:20:42 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 21:21:38 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char temp;
	unsigned char temp2;

	temp = octet >> 4;
	temp2 = octet << 4;
	return (temp + temp2);
}
