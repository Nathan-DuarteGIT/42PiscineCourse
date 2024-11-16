/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:23:24 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/06 17:23:33 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			count ++;
		i++;
	}
	if (count < i)
		return (0);
	else
		return (1);
	return (1);
}
/*
int main()
{
	char str[] = "EUSOUOJOAo";
	int resultado;
	resultado = ft_str_is_uppercase(str);

	printf("%d", resultado);
}*/
