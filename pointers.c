#include <stdio.h>

int main()
{
	char *ptr;
	char tmp = 'a';

	printf("ptr(%p) tem %d bytes\n", &ptr, sizeof(ptr));
	printf("tmp(%p) tem %d bytes\n", &tmp, sizeof(tmp));

	ptr = &tmp;

	printf("ptr(%p) aponta para tmp: %c\n", ptr, *ptr);
	printf("mas o endereço de ptr(%p) ainda é o mesmo\n", &ptr);

	return 0;
}