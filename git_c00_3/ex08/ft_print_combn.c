#include <unistd.h>

void	ft_write(int *str, int n)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		str[i] = str[i] + 48;
		write(1, &str[i], 1);
		i++;
	}
	if(str[0] != str[n - 1] - (n - 1))
		write(1, ", ", 2);
}

void	ft_confirm(int *str, int n)
{
	int	i;
	int	j;
	int	equal;

	equal = 0;
	i = 0;
	while (i < n)
	{
		j = i+1;
		while (j < n)
		{
			equal++;
			j++;
		}
		i++;
	}
	if (equal == 0)
	{
		ft_write(str,n);
	}
}

int	*ft_firstcomb(int *str, int n)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			str[i] = '0';
		}
		else
			str[i] = str[i] + 1;
	}
	return (str);
}

void	ft_print_combn(int n)
{
	int	str[n];
	int	comb;
	int	i;
	int	j;

	comb = 0;
	if (comb == 0)
	{
		ft_firstcomb(str, n);
		ft_write(str, n);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while(j <= 9)
			{
				str[j] = j;
				ft_confirm(str, n);
				j++;
			}
			i++;
		}
	}
}

int main()
{
	ft_print_combn(2);
}
