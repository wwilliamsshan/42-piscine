/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:47:15 by wshan             #+#    #+#             */
/*   Updated: 2018/05/24 17:16:11 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int length;

	i = 0;
	length = max - min;
	if (min < max)
	{
		*range = (int*)malloc(sizeof(int) * (length));
		while (min < max)
		{
			range[0][i] = min;
			i++;
			min++;
		}
		return (length);
	}
	else
	{
		range[i] = NULL;
		return (0);
	}
}
