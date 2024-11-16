/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:37:45 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/12 19:34:06 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	t;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	t = i;
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (t);
}
/*
int main()
{
	char	str[] = "ola eu sou o antonio";
	char	str1[30];
	int	size;
	size = ft_strlcpy(str1, str, 30);
	printf("%d", size);
}*/
