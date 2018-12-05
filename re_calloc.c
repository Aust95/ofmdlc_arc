#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = calloc(5, sizeof(int));

	int i;

	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;

	for (i =0; i < 5; i++) {
		printf("Endereco de p%i: %p | Valor de p%i: %i\n", i, &p[i], i, p[i]);
	}

	p = realloc(p, 10 * sizeof(int));

	p[5] = 60;
	p[6] = 70;
	p[7] = 80;
	p[8] = 90;
	p[9] = 100;

	for (i = 5; i < 10; i++) {
		printf("cinco novos elementos alocados: endereco de p%i: %p | Valor de p%i = %i\n", i, &p[i], i, p[i]);
	}
	
	free(p);

	return 0;
}
