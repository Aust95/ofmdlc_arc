#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>

static void my_signal(int sig)
{
	fprintf(stdout, "recebendo sinal %d...\n", sig);
	exit(1);
}

int main()
{
	char temp[128];

	signal(SIGHUP, SIG_IGN);
	signal(SIGPIPE, SIG_IGN);
	signal(SIGINT, my_signal);
	signal(SIGTERM, my_signal);
	signal(SIGKILL, my_signal);
	signal(SIGSEGV, my_signal);

	while(!feof(stdin)) {
		memset(temp, 0, sizeof(temp));
		if(fgets(temp, sizeof(temp)-1, stdin) == NULL)
			break;
		else
			fprintf(stdout, "texto: %s\n", temp);
	}

	return 0;
}
