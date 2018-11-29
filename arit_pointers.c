#include <stdio.h>

int main()
{
	char *pointer, str[] = "I am a vector";//declara um ponteiro do tipo char, vetor do tipo char

	pointer = str;//passado endereço do prmeiro elemento do vetor

	while(*pointer != '\0'){
		printf("%p -> %c\n", pointer, *pointer++);//mostra os endereços de cada membro do vetor str, incrementa o vetor str para mostrar o elemento seguinte
		
	}

	return 0;
}