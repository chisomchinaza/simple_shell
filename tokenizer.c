#include "shell.h"

void tokenize_input(char *input, char **tokens) {
	char *token = strtok(input, ";");
	int i = 0;

	while (token != NULL) {
		// Trim leading and trailing spaces from the token
		while (*token && (*token == ' ' || *token == '\t')) {
			token++;
		}

		int len = strlen(token);
		while (len > 0 && (token[len - 1] == ' ' || token[len - 1] == '\t' || token[len - 1] == '\n')) {
			token[len - 1] = '\0';
			len--;
		}

		if (len > 0) {
			tokens[i] = token;
			i++;
		}

		token = strtok(NULL, ";");
	}

	tokens[i] = NULL; // Set the last element to NULL for execve
}

