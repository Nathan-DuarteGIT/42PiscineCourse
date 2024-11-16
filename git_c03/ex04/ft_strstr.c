/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:00:20 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/12 12:31:56 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	while (*str)
	{
		s = str;
		t = to_find;
		while (*s != '\0' && *t != '\0' && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
/*
int main()
{
	char s[] = "hello world";
	char t[] = "world";
	char *f;
	int	i;
	f = ft_strstr(s, t);
	i = 0;
	while(*f)
	{
		printf("%c", *f);
		f++;
	}
}*/
