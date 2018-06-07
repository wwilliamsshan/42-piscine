/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:28:02 by wshan             #+#    #+#             */
/*   Updated: 2018/06/07 16:51:09 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		gcd(int a, int b)
{
	int i;
	int ret;

	i = 1;
	ret = 0;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			ret = i;
		}
		i++;
	}
	return (ret);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", gcd(atoi(argv[1]), atoi(argv[2])));
	}
	printf("%c", '\n');
	return (0);
}
