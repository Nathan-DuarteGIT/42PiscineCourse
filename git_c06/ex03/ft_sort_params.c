/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:26:09 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/18 19:26:12 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **str, char **str1)
{
	char	*temp;

	temp = *str;
	*str = *str1;
	*str1 = temp;
}

int	ft_strcmp(char*s1, char*s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = j + 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) > 0)
				ft_swap(&argv[j], &argv[i]);
			i++;
		}
		i = 0;
		while (argv[j][i] != '\0')
			write(1, &argv[j][i++], 1);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
