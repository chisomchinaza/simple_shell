#include "shell.h"

void handle_exit() {
	write(STDOUT_FILENO, "Exiting the shell.\n", strlen("Exiting the shell.\n"));
	exit(EXIT_SUCCESS);
}

