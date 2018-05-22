/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:25:06 by wshan             #+#    #+#             */
/*   Updated: 2018/05/21 19:46:00 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = source[index];
		index = index + 1;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index = index + 1;
	}
	return (0);
}
