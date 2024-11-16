#include <unistd.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
	char	*string;
	int	i;

	if (argc < 2) {
        	printf("Uso: %s <string>\n", argv[0]);
        	return 1;  // Indica um erro
    	}

	i = 0;
    	*string = argv[1];
	while(string[i] != '\0')
	{
		printf("%c", string[i]);
	}
}
