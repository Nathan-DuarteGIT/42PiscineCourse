/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:05:11 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/08 12:05:14 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int main()
{
	char str[] = "ola o meu nome e joao";
	char str1[] = "ola o meu nome e antonio";
	int result;
	result = ft_strncmp(str, str1, 20);
	if(result < 0)
		printf("str e menor que str1");
	else if(result > 0)
		printf("str e maior que str1");
	else
		printf("str e str1 sao iguais");
}*/
