/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:53:49 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/18 17:25:03 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	d;

	while (1)
	{
		nb++;
		i = 1;
		d = 0;
		while (i <= nb)
		{
			if (nb % i == 0)
				d++;
			i++;
		}
		if (d == 2)
			return (nb);
	}
}

/*int main()
{
	int result;
	result = ft_find_next_prime(3);
	printf("%d", result);
}*/
