/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:47:17 by wshan             #+#    #+#             */
/*   Updated: 2018/05/23 21:14:58 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	if (argc > 0)
	{
		index = 0;
		while (argv[0][index])
		{
			ft_putchar(argv[0][index]);
			index++;
		}
		ft_putchar('\n');
	}
	return (0);
}
