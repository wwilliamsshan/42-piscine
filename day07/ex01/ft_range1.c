/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:41:28 by wshan             #+#    #+#             */
/*   Updated: 2018/05/24 14:45:50 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int			i;
	long long	length;
	int			*array;

	if (min >= max)
	{
		return (NULL);
	}
	length = max - min;
	array = (int*)malloc(sizeof(*array) * (length + 1));
	i = 0;
	while (i < length)
	{
		array[i] = (min + i);
		i++;
	}
	return (array);
	free(array);
}
