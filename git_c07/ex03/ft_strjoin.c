#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_l;
	int	i;

	dest_l = str_length(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strfinal;
	int		i;
	int		sizetotal;

	if(strs == NULL || sep == NULL)
	{
		
	}
	if(size == 0)
	{
		strfinal = (char *)malloc(1);
		strfinal[0] = '\0';
	}
	while(i < size)
	{
		if(i != size - 1)
			
	}
}