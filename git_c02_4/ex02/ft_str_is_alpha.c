/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:44:23 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/12 13:54:24 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			count++;
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
	char	str[] = "ola o meu nome e 1";
	int	resultado;
	resultado = ft_str_is_alpha(str);

	printf("%d", resultado);
}*/
