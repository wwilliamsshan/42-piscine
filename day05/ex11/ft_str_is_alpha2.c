/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 18:49:59 by wshan             #+#    #+#             */
/*   Updated: 2018/05/22 19:07:51 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;
	int length;

	index = 0;
	length = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		length = length + 1;
		index = index + 1;
	}
	index = 0;
	while ((('A' <= str[index] && str[index] <= 'Z') ||
			('a' <= str[index] && str[index] <= 'z')) && index <= length)
	{
		if (index == length - 1)
		{
			return (1);
		}
		index = index + 1;
	}
	return (0);
}
