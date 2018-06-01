/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 19:30:34 by wshan             #+#    #+#             */
/*   Updated: 2018/05/30 21:18:49 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*elem;
	t_list	*temp;

	i = 0;
	temp = 0;
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = temp;
		temp = elem;
		i++;
	}
	return (elem);
}
