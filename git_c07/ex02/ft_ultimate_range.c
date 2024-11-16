#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	if(min >= max)
	{
		*range = NULL;
		return(0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if(!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while(i < size)
	{
		arr[i] = min + i;
		i++;
	}
	range[0] = arr;
	return(i);
}

int main()
{
    int max = 10;
    int min = 2;
    int *range;
	int result;
    int i;
	printf("estou no programa");
	range = NULL;
    result = ft_ultimate_range(&range, min, max);
	printf("passei a funcao");
    if(range != NULL){
        i = 0;
        while(i < max-min)
		{
			printf("%d",range[i]);
			i++;
		}
	
		printf("range tem o tamanho de %d", result);
        free(range);
    }
}