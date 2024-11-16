/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:58:21 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/18 14:15:58 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			if (num == 0)
				num = i;
			else
				num = num * i;
			i++;
		}
	}
	return (num);
}
/*
int main()
{
	int	result;
	result = ft_iterative_factorial(10);
	printf("%d\n", result);
}*/
