/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:09:33 by wshan             #+#    #+#             */
/*   Updated: 2018/05/28 20:25:19 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*temp;

	i = 0;
	temp = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		temp[i] = f(tab[i]);
		i++;
	}
	return (temp);
}
