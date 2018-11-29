#include <stdio.h>

int main()
{
	char *pointer, str[] = "sou um vetor";//declaracao de ponteiro tipo char, declaracao de array tipo char

	pointer = str;//ponteiro recebe o endereco do membro incial do vetor str
	pointer += 5;//ponteiro avanca 5 bytes em relacao ao endereco inicial

	printf("%c, %c\n", *pointer, pointer[2]);//ao avancarmos 5 bytes, foi printado osexto elemento do vetor.foi printado o "segundo" elemento, em relacao a posicao anterior do ponteiro

	return 0;
}