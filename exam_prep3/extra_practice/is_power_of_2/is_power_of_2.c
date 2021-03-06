/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:18:32 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 11:35:03 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
