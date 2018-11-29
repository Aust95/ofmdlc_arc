#include <stdio.h>
#include <string.h>

int main()
{
	int i;

	int vec[] = {'Y','o','u',' ','w','e','a','k',' ','p','a','t','h','e','t','i','c',' ','f','o','o','l','!'};//cada caractere será armazenado separadamente,no endereco de cada vetor, incluindo espacos
	char* vec_bytes = &vec[0];

	for(i = 0; i < sizeof(vec); i++)//criamos esse loop,dessa forma "i" comecara em 0,o loop se repetira enquanto o numero de elementos do vetor for superior a i.i será incrementado de forma crescente 
	{
		fprintf(stdout, "vec[%d] %p %c\n", i, &vec_bytes[i], (char) vec_bytes[i]);// %d exibira um numero decimal relativo a nossa contagem de elementos.%p exibira o endereço em hex do respectivo elemento.%c exibira o conteudo do respectivo elemento
	}

	return 0;
}

