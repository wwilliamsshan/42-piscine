/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 20:25:10 by wshan             #+#    #+#             */
/*   Updated: 2018/06/04 20:35:23 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		max(int *tab, unsigned int len);
{
	unsigned int 	i;
	int				ret;

	i = 0;
	ret = INT_MIN;
	if (tab[i])
	{
		while (i < len)
		{
			if (tab[i] > ret)
			{
				ret = tab[i];
			}
			i++;
		}
		return (ret);
	}
	else
	{
		return (0);
	}
}
