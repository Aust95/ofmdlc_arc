#include <stdio.h>
#include <string.h>

int main()
{
	struct pessoa {//struct pessoa foi criada
		int idade;
		char nome[20];
	};

	struct pessoa bozo[2];//vetor do tipo  struct pessoas foi declarado
	struct pessoa *p;//ponteiro do tipo struct pessoas foi declarado

	memset(&bozo, 0, sizeof(bozo));

	bozo[0].idade = 33;
	snprintf(bozo[0].nome, sizeof(bozo[0].nome), "Palhaco Bozo#1");//"Palhaco Bozo" é escrito na variavel nome do primeiro elemento do vetor

	bozo[1].idade = 28;
	snprintf(bozo[1].nome, sizeof(bozo[1].nome), "Palhaco Bozo#2");

	p = bozo;//ponteiro recebeu o endereco  do vetor 

	printf("Nome: %s, Idade: %d\n", p->nome, p->idade);

	p++;//incremento feito para passarmos para o elemeto seguinte do vetor

	printf("Nome: %s, Idade: %d\n", p->nome, p->idade);

	return 0;
}	
	

