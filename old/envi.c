#include "shell.h"

/*
 * function prints the current environment variables.
 * It uses the environ external variable.
 *
 * return:0 as always
 */

void print_environment(void)

{
	int s;
	char *environ;

	for (s = 0; environ[s] != NULL; s++)

	{
		write(STDOUT_FILENO, environ, strlen(environ));
		write(STDOUT_FILENO, "\n", 1);
	}
}

