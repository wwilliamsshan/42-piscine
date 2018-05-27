/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:16:01 by wshan             #+#    #+#             */
/*   Updated: 2018/05/25 14:20:01 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i < j && j < k) || (k < j && j < i))
	{
		return (j);
	}
	else if ((j < i && i < k) || (k < i && i < j))
	{
		return (i);
	}
	else if ((j < k && k < i) || (i < k && k < j))
	{
		return (k);
	}
	return (0);
}
