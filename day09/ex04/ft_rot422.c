/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:43:24 by wshan             #+#    #+#             */
/*   Updated: 2018/05/25 14:03:22 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (str[i] <= 'i')
			{
				str[i] = str[i] + 16;
			}
			else if (str[i] >= 'k')
			{
				str[i] = str[i] - 10;
			}
		}
		i++;
	}
}

void	ft_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (str[i] <= 'I')
			{
				str[i] = str[i] + 16;
			}
			else if (str[i] >= 'K')
			{
				str[i] = str[i] - 10;
			}
		}
		i++;
	}
}

char	*ft_rot42(char *str)
{
	ft_lowercase(str);
	ft_uppercase(str);
	return (str);
}
