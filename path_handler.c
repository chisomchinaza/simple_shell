#include "shell.h"

char *get_command_path(char *command) {
	char *path = getenv("PATH");
	char *token = strtok(path, ":");

	while (token != NULL) {
		char *command_path = malloc(strlen(token) + strlen(command) + 2);
		sprintf(command_path, "%s/%s", token, command);

		if (access(command_path, X_OK) == 0) {
			return command_path;
		}

		free(command_path);
		token = strtok(NULL, ":");
	}

	return NULL;
}

