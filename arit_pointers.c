#include <stdio.h>

int main()
{
	char *pointer, str[] = "I am a vector";//declara um ponteiro do tipo char, vetor do tipo char

	pointer = str;//passado endereço do prmeiro elemento do vetor

	while(*pointer != '\0'){//while continuara sendo executado enquanto o conteudo do endereco apontado pelo ponteiro for diferente de 0
		printf("%p -> %c\n", pointer, *pointer++);//printa o endereço do ponteiro, e o valor dentro do endereço, e depois incrementa o pointer 
		
	}

	return 0;
}