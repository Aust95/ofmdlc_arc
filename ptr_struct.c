#include <stdio.h>
#include <string.h>

int main()
{
	struct pessoa {//struct pessoa foi declarada
		int idade;
		char nome[20];
	};

	struct pessoa bozo;// variavel do tipo struct pessoa foi declarada
	struct pessoa *p;//ponteiro do tipo struct pessoa foi declarado

	memset(&bozo, 0, sizeof(bozo));//zera os bytes de uma area especifica da memoria,setada pelo primeiro argumento, o terceiro = tamanho em bytes 

	bozo.idade = 33;
	snprintf(bozo.nome, sizeof(bozo.nome), "Palhaco Bozo");//"Palhaco Bozo" é escrita dentro do vetor bozo.nome

	p = &bozo;//ponteiro recebe o endereco da variavel bozo

	printf("nome: %s, Idade: %d\n", p->nome, p->idade);//o nome e idade foram escritos na tela

	return 0;

}
