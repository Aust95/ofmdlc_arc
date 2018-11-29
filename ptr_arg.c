#include <stdio.h>
#include <string.h>

static int my_strlen(char *str)
{
	int cout = 0;
	while(*str++ != '\0') cout++;

	return cout;
}

int main()
{
	char temp[128];

	memset(temp, 0, sizeof(temp));
	snprintf(temp, sizeof(temp), "Sou um vetor");

	printf("string %s tem %d bytes.\n", temp, my_strlen(temp));

	return 0;
}
