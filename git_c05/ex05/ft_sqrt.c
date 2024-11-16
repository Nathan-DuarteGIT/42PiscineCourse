/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:44:42 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/18 17:03:37 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	esq;
	int	dir;
	int	meio;

	esq = 1;
	dir = nb;
	meio = 0;
	while (esq <= dir) 
	{
		meio = esq + (dir - esq) / 2;
		if (meio == nb / meio)
			break ;
		else if (meio < nb / meio)
			esq = meio + 1;
		else
			dir = meio - 1;
	}
	if (meio * meio == nb)
		return (meio);
	return (0);
}

/*int main()
{
	int result;
	int i;
	i = 0;
	while(i < 26)
	{
		result = ft_sqrt(i);
		printf("a raiz quadrada de %d e %d\n", i, result);
		i++;
	}
}*/
