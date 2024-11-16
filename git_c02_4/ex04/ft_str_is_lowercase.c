/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:24:58 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/06 17:25:01 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str[] = "olaomeunomeejoao";
	int resultado;
	resultado = ft_str_is_lowercase(str);

	printf("%d", resultado);
}*/
