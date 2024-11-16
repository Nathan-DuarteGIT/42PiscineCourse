/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:39:32 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/03 17:39:35 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralphabet;

	ralphabet = 'z';
	while (ralphabet >= 'a')
	{
		write(1, &ralphabet, 1);
		ralphabet--;
	}
}
