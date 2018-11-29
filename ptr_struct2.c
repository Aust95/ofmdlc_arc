#include <stdio.h>
#include <string.h>

int main()
{
	struct pessoa {
		int idade;
		char nome[20];
	};

	struct pessoa bozo[2];
	struct pessoa *p;

	memset(&bozo, 0, sizeof(bozo));

	bozo[0].idade = 33;
	snprintf(bozo[0].nome, sizeof(bozo[0].nome), "Palhaco Bozo#1");

	bozo[1].idade = 28;
	snprintf(bozo[1].nome, sizeof(bozo[1].nome), "Palhaco Bozo#2");

	p = bozo;

	p++;

	printf("Nome: %s, Idade: %d\n", p->nome, p->idade);

	p--;

	printf("Nome: %s, Idade: %d\n", p->nome, p->idade);

	return 0;
}	
	

