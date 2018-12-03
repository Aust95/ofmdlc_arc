#include <stdio.h>
#include <string.h>

struct pessoa {
	int idade;
	char nome[20];
	char desc[50];
};

static void my_print(struct pessoa *ptr)
{
	fprintf(stdout, "Nome: %s\nIdade: %d\nDescricao: %s\n", ptr->nome, ptr->idade, ptr->desc);
}

int main()
{
	struct pessoa bozo;

	memset(&bozo, 0, sizeof(bozo));
	bozo.idade = 31;
	snprintf(bozo.nome, sizeof(bozo.nome), "Bozo");
	snprintf(bozo.desc, sizeof(bozo.desc), "O palhaco de todos voces");

	my_print(&bozo);

	return 0;
}
