/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:09:37 by wshan             #+#    #+#             */
/*   Updated: 2018/06/04 14:34:49 by wshan            ###   ########.fr       */
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

char	*inter(char *str1, char *str2)
{
	int		i;
	int		j;
	int		k;
	int		length1;
	int		length2;
	char	*temp;

	i = 0;
	j = 0;
	k = 0;
	length1 = 0;
	length2 = 0;
	while (str1[length1])
	{
		length1++;
	}
	while (str2[length2])
	{
		length2++;
	}
	if (length1 < length2)
	{
		temp = (char *)malloc(sizeof(char) * length1 + 1);
		while (str1[j])
		{
			while (str2[k])
			{
				if (str1[j] == str2[k])
				{
					temp[i] = str1[j];
					i++;
					break ;
				}
				k++;
			}
			k = 0;
			j++;
		}
		return (temp);
	}
	else
	{
		temp = (char *)malloc(sizeof(char) * length2 + 1);
		while (str2[j])
		{
			while (str1[k])
			{
				if (str2[j] == str1[k])
				{
					temp[i] = str2[j];
					i++;
					break ;
				}
				k++;
			}
			k = 0;
			j++;
		}
		return (temp);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putstr(inter(argv[1], argv[2]));
	}
	return (0);
}
