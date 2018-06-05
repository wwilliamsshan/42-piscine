/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:54:53 by wshan             #+#    #+#             */
/*   Updated: 2018/06/04 20:22:48 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	copy = (char *)malloc(sizeof(char) * length + 1);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	else
	{
		ft_putstr(ft_strdup(argv[1]));
	}
	return (0);
}
