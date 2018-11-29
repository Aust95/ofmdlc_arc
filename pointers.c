#include <stdio.h>

int main()
{
	char *ptr;//ponteiro do tipo char foi delcarado
	char tmp = 'a';//variavel tmp recebe "a"

	printf("ptr(%p) tem %d bytes\n", &ptr, sizeof(ptr));//printa o endereco de ptr, printa o tamanho de ptr em bytes
	printf("tmp(%p) tem %d bytes\n", &tmp, sizeof(tmp));//printa o enderecode tmp, printa o tamanho da variavel tmp

	ptr = &tmp;//ponteiro recebe o endereco da variavel tmp

	printf("ptr(%p) aponta para tmp: %c\n", ptr, *ptr);//ponteiro aponta para o endereco da variavel tmp
	printf("mas o endereço de ptr(%p) ainda é o mesmo\n", &ptr);//apenas mostra que o endereco de ptr continua sendo o mesmo

	return 0;
}