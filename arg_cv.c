#include <stdio.h>

int main (int argc, char **argv)
{
	char **fn;

	if(argc < 2) {
		fprintf(stderr, "use: %s string1 [string2]...\n", *argv);
		return 1;
	} else
		fn = ++argv;

	while (--argc)
		fprintf(stdout, "argumento: %s\n", *fn++);

	return 1;
}
