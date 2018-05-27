/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:20:27 by wshan             #+#    #+#             */
/*   Updated: 2018/05/25 15:38:19 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
	{
		return (0);
	}
	if (base % 2 == 0)
	{
		return (1 + ft_collatz_conjecture(base / 2));
	}
	else if (base % 2 == 1)
	{
		return (1 + ft_collatz_conjecture((3 * base) + 1));
	}
	return (0);
}
