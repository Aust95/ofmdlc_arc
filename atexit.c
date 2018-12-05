#include <stdio.h>
#include <stdlib.h>

static void my_finish()
{
	fprintf(stdout, "finalizando dispositivos...\n");
}

static void my_cleanup()
{
	fprintf(stdout, "fechando arq de configuracao...\n");
}

int main()
{
	atexit(my_cleanup);
	atexit(my_finish);	

	return 0;
}
