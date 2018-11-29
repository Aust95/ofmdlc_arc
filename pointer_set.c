#include <stdio.h>

int main()
{
	char *pointer, str[] = "sou um vetor";

	pointer = str;
	pointer += 5;

	printf("%c, %c\n", *pointer, pointer[2]);

	return 0;
}