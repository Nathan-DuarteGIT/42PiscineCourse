/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:20:25 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/05 17:20:51 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	d;
	int	temp;
	int	i;

	i = 0;
	d = size / 2;
	while (d > 0)
	{
		size--;
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		d--;
	}
}
/*
int main()
{
	int i = 0;
	int str[4] = {1,2,3,4};
	ft_rev_int_tab(str, 4);
	while(i < 4)
	{
		printf("%d ", str[i]);
		i++;
	}
}*/
