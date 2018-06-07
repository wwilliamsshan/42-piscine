/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:41:56 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 21:44:57 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = INT_MIN;
	if (tab[i] == NULL)
	{
		return (0);
	}
	while (i < len)
	{
		if (tab[i] > result)
		{
			result = tab[i];
		}
		i++;
	}
	return (result);
}
