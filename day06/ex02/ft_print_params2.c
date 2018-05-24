/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:56:55 by wshan             #+#    #+#             */
/*   Updated: 2018/05/23 21:30:05 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = 1;
	b = 0;
	if (argc > 0)
	{
		while (a < argc)
		{
			while (argv[a][b])
			{
				ft_putchar(argv[a][b]);
				b++;
			}
			ft_putchar('\n');
			b = 0;
			a++;
		}
	}
	return (0);
}
