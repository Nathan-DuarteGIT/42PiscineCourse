/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:11:00 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/13 20:57:50 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_chartoint(char c)
{
	return (c - '0');
}

int	ft_verifynum(char *str)
{
	int	num;
	int	fn;

	num = 0;
	fn = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (fn == 0)
				fn++;
			num = (num * 10) + ft_chartoint(*str);
			str++;
		}
		else if ((*str < '0' || *str > '9') && fn == 1)
			break ;
		else
			str++;
	}
	return (num);
}

int	ft_verifyless(char *str)
{
	int	l;
	int	i;

	i = 0;
	l = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
			{
				l++;
				break ;
			}
			else if (str[i + 1] != '-' && str[i + 1] != '+')
				return (-1);
			else
				l++;
		}
		i++;
	}
	return (l);
}

int	ft_atoi(char *str)
{
	int	n_less;
	int	nb;

	n_less = ft_verifyless(str);
	if (n_less < 0)
		return (0);
	nb = ft_verifynum(str);
	if (n_less % 2 != 0)
		return (nb * (-1));
	return (nb);
}
/*
 tem que seguir a sequencia de espacos (do caracter 9-13 e o 32) sinais e numeros
int main()
{
	int r;
	
	r = ft_atoi("abcdefghijklmnopqrstuvwxyz12");
	printf("%d", r);
}*/
