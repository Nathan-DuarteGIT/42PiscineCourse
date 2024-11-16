/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 02:59:41 by ngoncalv          #+#    #+#             */
/*   Updated: 2024/03/12 16:44:53 by ngoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putintchar(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_final(int nu, int i, int d, int ten)
{
	int	nt;
	int	tn;

	i = 1;
	while (i < d)
	{
		ten = ten * 10;
		i++;
	}
	i = 0;
	nt = nu;
	while (i < d)
	{
		tn = nt;
		nt = nt / ten;
		ft_putintchar(nt);
		nt = tn % ten;
		ten = ten / 10;
		i++;
	}
	nt = nu % 10;
	ft_putintchar(nt);
}

void	ft_division(int d, int nu, int ten, int i)
{
	int	nt;

	if (d == 1)
	{
		nt = nu / 10;
		ft_putintchar(nt);
		nt = nu % 10;
		ft_putintchar(nt);
	}
	else
		ft_final(nu, i, d, ten);
}

void	ft_numbten(int nu)
{
	int	i;
	int	d;
	int	nt;
	int	ten;

	ten = 10;
	nt = nu / 10;
	i = 0;
	d = 1;
	while (i < 10)
	{
		if (nt < 10)
			break ;
		else
		{
			nt = nt / 10;
			d++;
		}
		i++;
	}
	ft_division(d, nu, ten, i);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			write(1, "-", 1);
			nb = nb * (-1);
		}
	}
	if (nb < 10)
	{
		ft_putintchar(nb);
	}
	else
	{
		ft_numbten(nb);
	}
}
/*
int main()
{
	ft_putnbr(2147483647);
}*/
