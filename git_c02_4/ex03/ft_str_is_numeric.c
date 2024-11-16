/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:58:51 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/06 17:07:10 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
        char    str[] = "1234567890a";
        int     resultado;
        resultado = ft_str_is_numeric(str);

        printf("%d", resultado);
}*/
