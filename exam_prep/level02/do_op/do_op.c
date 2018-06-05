/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:43:18 by wshan             #+#    #+#             */
/*   Updated: 2018/06/05 14:09:21 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_itoa(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int		do_op(char *str1, char op, char *str2)
{
	if (op == '+')
	{
		return (ft_itoa(str1) + ft_itoa(str2));
	}
	else if (op == '-')
	{
		return (ft_itoa(str1) - ft_itoa(str2));
	}
	else if (op == '*')
	{
		return (ft_itoa(str1) * ft_itoa(str2));
	}
	else if (op == '/')
	{
		return (ft_itoa(str1) / ft_itoa(str2));
	}
	else if (op == '%')
	{
		return (ft_itoa(str1) % ft_itoa(str2));
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d", do_op(argv[1], argv[2][0], argv[3]));
	}
	printf("%c", '\n');
	return (0);
}
