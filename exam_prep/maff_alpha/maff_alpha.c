/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:17:40 by wshan             #+#    #+#             */
/*   Updated: 2018/06/01 13:47:14 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(char lowercase, char uppercase)
{
	while ('a' <= lowercase && lowercase <= 'z' && 'B' <= uppercase && uppercase <= 'Z')
	{
		ft_putchar(lowercase);
		ft_putchar(uppercase);
		lowercase = lowercase + 2;
		uppercase = uppercase + 2;
	}
	ft_putchar('\n');
}

int		main(void)
{
	char lowercase;
	char uppercase;

	lowercase = 'a';
	uppercase = 'B';
	maff_alpha(lowercase, uppercase);
	return (0);
}
