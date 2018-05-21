/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:57:57 by wshan             #+#    #+#             */
/*   Updated: 2018/05/21 15:21:27 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int index;
	int sign;
	int result;

	index = 0;
	sign = 1;
	result = 0;
	if (str[index] == '-' || str[index] == ' ')
	{
		sign = -1;
		index = index + 1;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + str[index] - '0';
		index = index + 1;
	}
	return (result * sign);
}

int		main(void)
{
	printf("%d", ft_atoi("-123456"));
	return (0);
}
