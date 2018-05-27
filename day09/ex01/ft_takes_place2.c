/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 19:25:43 by wshan             #+#    #+#             */
/*   Updated: 2018/05/24 21:23:08 by wshan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 0 || hour == 24)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		printf("%s", "12.00 A.M. AND 1.00 A.M.\n");
	}
	else if (1 <= hour && hour <= 10)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, (hour + 1));
	}
	else if (hour == 11)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		printf("%d.00 A.M. AND %d.00 P.M.\n", hour, (hour + 1));
	}
	else if (hour == 12)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		printf("%d.00 P.M. AND 1.00 P.M.\n", hour);
	}
	else if (13 <= hour && hour <= 22)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		printf("%d.00 P.M. AND %d.00 P.M.\n", (hour - 12), (hour - 11));
	}
	else if (hour == 23)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		printf("%d.00 P.M. AND 12.00 A.M.\n", hour - 12);
	}
}
