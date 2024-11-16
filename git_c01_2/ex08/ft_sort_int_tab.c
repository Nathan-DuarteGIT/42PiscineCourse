/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:36:23 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/14 16:31:56 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	size2;
	int	i;

	i = 0;
	size--;
	size2 = size;
	while (i <= size2)
	{
		size = size2;
		while (size >= 0)
		{
			if (tab[size] < tab[size - 1])
			{
				temp = tab[size];
				tab[size] = tab[size - 1];
				tab[size - 1] = temp;
			}
			size--;
		}
		i++;
	}
}
/*int	main(void)
{
	int *tab;
	int counter;

	srand(1);
	counter = 0;
	tab = calloc(10, sizeof(int));
	while (counter < 10)
	{
		tab[counter] = rand() % 100;
		counter++;
	}
	counter = -1;
	while (9 > counter++)
		printf("%d ", tab[counter]);
	ft_sort_int_tab(tab, 10);
	printf("%c", '\n');
	counter = -1;
	while (9 > counter++)
		printf("%d ", tab[counter]);
	printf("%c", '\n');
	return (0);
}
*/
/*
int main()
{
	int	i = 0;
	int	str[4] = {57,47,35,12};
	ft_sort_int_tab(str, 4);
	while(i < 4)
	{
		printf("%d ", str[i]);
		i++;
	}
}*/
