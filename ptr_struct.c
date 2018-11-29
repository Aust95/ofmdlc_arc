#include <stdio.h>
#include <string.h>

int main()
{
	struct pessoa {
		int idade;
		char nome[20];
	};

	struct pessoa bozo;
	struct pessoa *p;

	memset(&bozo, 0, sizeof(bozo));// ?

	bozo.idade = 33;
	snprintf(bozo.nome, sizeof(bozo.nome), "Palhaco Bozo");

	p = &bozo;

	printf("nome: %s, Idade: %d\n", p->nome, p->idade);

	return 0;

}
