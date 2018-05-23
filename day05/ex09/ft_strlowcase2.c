/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:44:59 by wshan             #+#    #+#             */
/*   Updated: 2018/05/22 14:58:24 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ('A' <= str[index] && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index = index + 1;
	}
	return (str);
}
