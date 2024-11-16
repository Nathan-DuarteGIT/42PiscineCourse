/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:22:07 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/09 13:24:04 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_length(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_l;
	int	i;

	dest_l = ft_length(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "world";
	char dest[] = "hello ";
	int i = 0;
	ft_strcat(dest, src);
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
}*/
