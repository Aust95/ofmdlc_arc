#include <stdio.h>

int main()
{
	char x = 10, y = 5, z = x + y;

	fprintf(stdout, "%d\n", (int) z);//(int)utilizamos o type cast na variavel z, para fazer com que ela seja interpeada como do tipo int
	printf("Numero de bytes que nossa var char ocupa:\n char x: %d\n char y: %d\n char z: %d\n", sizeof(x), sizeof(y), sizeof(z));
	//utilizei aqui o operador sizeof,apenas para fins demonstrativos, para mostrar o tamanho em byte(s) das nossas variaveis.
	return 0;
}