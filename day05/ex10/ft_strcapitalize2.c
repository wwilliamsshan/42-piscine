/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:00:41 by wshan             #+#    #+#             */
/*   Updated: 2018/05/22 17:08:43 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int a;
	int b;
	int begin;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		begin = a;
		while (('A' <= str[a] && str[a] <= 'Z') ||
				('a' <= str[a] && str[a] <= 'z') ||
				('0' <= str[a] && str[a] <= '9'))
		{
			if (('a' <= str[begin + b] && str[begin + b] <= 'z') && b == 0)
				str[begin + b] = str[begin + b] - 32;
			else if (('A' <= str[begin + b] && str[begin + b] <= 'Z') && b != 0)
				str[begin + b] = str[begin + b] + 32;
			a = a + 1;
			b = b + 1;
		}
		a = a + 1;
		b = 0;
	}
	return (str);
}
