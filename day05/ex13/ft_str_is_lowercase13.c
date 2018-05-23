/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 19:22:49 by wshan             #+#    #+#             */
/*   Updated: 2018/05/22 19:24:39 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (!('a' <= str[index] && str[index] <= 'z'))
		{
			return (0);
		}
		index = index + 1;
	}
	return (1);
}
