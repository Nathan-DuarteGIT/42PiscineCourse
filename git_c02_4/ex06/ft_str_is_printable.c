/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:28:07 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/09 11:28:10 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char str[] = "1234567890a";
	int resultado;
	resultado = ft_str_is_printable(str);

	printf("%d", resultado);
}*/
