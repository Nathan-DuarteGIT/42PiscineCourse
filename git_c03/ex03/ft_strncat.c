/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:59:59 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/09 17:00:04 by ngoncalv         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	dest_l;
	size_t	i;

	dest_l = ft_length(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
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
	int	i;
	i=0;
	ft_strncat(dest, src, 2);
	while(dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
}*/
