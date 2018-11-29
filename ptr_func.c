#include <stdio.h>

static int soma(int x, int y)//funcao do tipo int declarada,nao pode ser eacessada de fora do arquivo
{
	return x+y;
}
int main()
{
	int (*somaptr) (int x, int y);//ponteiro do tipo ponteiro(??),leva dois argumentos int

	somaptr = soma;//ponteiro recebe o endereco da funcao soma

	printf("Resultado: %d\n", somaptr(8, 5));//atraves do ponteiro, passamos os dois argumentos do tipo int para a funcao soma

	return 0;
}
