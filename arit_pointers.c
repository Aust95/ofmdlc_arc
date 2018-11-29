#include <stdio.h>

int main()
{
	char *pointer, str[] = "I am a vector";

	pointer = str;

	while(*pointer != '\0'){
		printf("%p -> %c\n", pointer, *pointer++);
		
	}

	return 0;
}