/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:33:35 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/08 12:06:04 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	return (0);
}
/*
int main()
{
	char str[] = "o joao foi";
	char str1[] = "o joao foi a praia";
	int result;
	result = ft_strcmp(str, str1);
	if(result < 0)
		printf("str e menor que a str1");
	else if(result > 0)
		printf("str e maior que a str1");
	else
		printf("str e a str1 sao iguais");
}*/
