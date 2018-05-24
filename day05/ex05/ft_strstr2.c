/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:48:34 by wshan             #+#    #+#             */
/*   Updated: 2018/05/23 19:34:41 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;
	int length;

	length = 0;
	while (to_find[length] != '\0')
	{
		length = length + 1;
	}
	if (length == 0)
		return (str);
	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b])
		{
			if (b == length - 1)
				return (str + a);
			b = b + 1;
		}
		a = a + 1;
	}
	return ('0');
}
