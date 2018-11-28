#include <stdio.h>
#include <stdlib.h>

struct cadastro{
	float altura;
	int idade, numero;
};

typedef struct cadastro cad;

int main()
{
	struct cadastro reg1;
	cad reg2;

	reg1.altura = 1.54;
	reg1.idade = 23;
	reg1.numero = 99999999;

	reg2.altura = 1.64;
	reg2.idade = 43;
	reg2.numero = 99499999;

	printf("Informação de cadastro:\n Altura: %.2f\n Idade: %d\n Numero: %d\n", reg1.altura, reg1.idade, reg1.numero);
	printf("Informação de cadastro:\n Altura: %.2f\n Idade: %d\n Numero: %d\n", reg2.altura, reg2.idade, reg2.numero);
	
	return 0;
}