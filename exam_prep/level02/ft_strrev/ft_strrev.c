/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:11:04 by wshan             #+#    #+#             */
/*   Updated: 2018/06/05 16:00:06 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	temp = (char *)malloc(sizeof(char) * i);
	j = 0;
	while (str[j] != '\0') 
	{
		temp[j] = str[j];
		j++;
	}
	j = 0;
	while (i >= 0)
	{
		str[j] = temp[i - 1];
		i--;
		j++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s", ft_strrev(argv[1]));
	}
	return (0);
}
