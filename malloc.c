#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr = malloc(sizeof(int));

	if (ptr == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		return 1;
	}

	*ptr = 10;
	
	printf("%d\n", *ptr);

	free(ptr);	

	return 0;
}
