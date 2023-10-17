#include "shell.h"

void print_environment() {
	extern char **environ;
	for (int i = 0; environ[i] != NULL; i++) {
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}

