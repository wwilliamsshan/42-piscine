/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:19:41 by wshan             #+#    #+#             */
/*   Updated: 2018/05/22 12:54:43 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (s1[index] && s2[index] && s1[index] == s2[index] && index < n - 1)
	{
		index = index + 1;
	}
	return (s1[index] - s2[index]);
}
