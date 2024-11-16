/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:55:10 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/05 14:55:13 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main()
{
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	a = 2;
	ptr1 = &a;
	b = 4;
	ptr2 = &b;

	printf("o valor de a e: %d \n", a);
	printf("o valor de b e: %d \n", b);
	ft_swap(ptr1, ptr2);
	printf("o valor de a e: %d \n", a);
	printf("o valor de b e: %d \n", b);
}
*/
