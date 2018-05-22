/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:55:54 by wshan             #+#    #+#             */
/*   Updated: 2018/05/22 14:02:39 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ('a' <= str[index] && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index = index + 1;
	}
	return (str);
}
