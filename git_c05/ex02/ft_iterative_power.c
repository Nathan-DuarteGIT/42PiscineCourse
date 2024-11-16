/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:54:49 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/18 14:19:40 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			num = num * nb;
			i++;
		}
	}
	return (num);
}
/*
int main()
{
	int result;
	result = ft_iterative_power(2, 3);
	printf("\n%d\n", result);
}*/
