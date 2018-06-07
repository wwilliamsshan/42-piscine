/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:50:22 by wshan             #+#    #+#             */
/*   Updated: 2018/06/06 22:58:31 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	*temp;

	len = 0;
	i = 0;
	while (str[len])
	{
		len++;
	}
	temp = (char *)malloc(sizeof(char) * len);
	len = len - 1;
	while (len >= 0)
	{
		temp[i] = str[len];
		len--;
		i++;
	}
	i = 0;
	while (temp[i])
	{
		str[i] = temp[i];
		i++;
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
