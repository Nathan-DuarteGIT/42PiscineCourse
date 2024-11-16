/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:10:32 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/12 13:12:41 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i; 
	size_t	j;
	size_t	dlen;
	size_t	slen;
	size_t	space;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	space = size - dlen;
	if (space == 0)
		return (dlen + slen);
	i = dlen;
	j = 0;
	size--;
	while (i < size && j < slen)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
/*
int main ()
{
	char str[] = "hello ";
	char str1[] = "world";
	int	size;
	size = ft_strlcat(str, str1, 11);
	printf("%d", size);
}*/
