/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:09:07 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 16:18:32 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	*c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
			{
				c = &argv[1][i];
				write(1, c, 1);
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
	}
	write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
