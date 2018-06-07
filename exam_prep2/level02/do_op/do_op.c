/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:58:16 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 22:05:07 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		do_op(char *s1, char *op, char *s2)
{
	int a;
	int b;

	a = atoi(s1);
	b = atoi(s2);
	if (op[0] == '+')
	{
		return (a + b);
	}
	else if (op[0] == '-')
	{
		return (a - b);
	}
	else if (op[0] == '*')
	{
		return (a * b);
	}
	else if (op[0] == '/')
	{
		return (a / b);
	}
	else if (op[0] == '%')
	{
		return (a % b);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d", do_op(argv[1], argv[2], argv[3]));
	}
	printf("%c", '\n');
	return (0);
}
