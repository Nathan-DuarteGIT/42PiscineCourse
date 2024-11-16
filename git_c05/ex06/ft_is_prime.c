/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:23:56 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/18 17:13:50 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	d;

	if (nb <= 1)
		return (0);
	i = 1;
	d = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			d++;
		i++;
	}
	if (d <= 2)
		return (1);
	return (0);
}

/*int main()
{
	int result;
	result = ft_is_prime(9);
	printf("%d", result);
}*/
