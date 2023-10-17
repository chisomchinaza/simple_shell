#include "shell.h"


char bpointer[Csom];

void run_shell() {
	ssize_t Rvalue;
	size_t len = 0;
	pid_t child_pid;
	int status;

	while (1) 
	{
		write(STDOUT_FILENO, Chisom$, strlen(Chisom$)); // Display prompt

		Rvalue = getline(&bpointer, &len, stdin); // Read command from user

		if (Rvalue == -1) {
			if (isatty(STDIN_FILENO)) {
				write(STDOUT_FILENO, "\n", 1); // Print a new line for interactive mode
			}
			break; // End of file (Ctrl+D) reached
		}

		// Remove trailing newline character
		if (bpointer[Rvalue - 1] == '\n') {
			bpointer[Rvalue - 1] = '\0';
		}

		// Tokenize the input command line
		char *tokens[Csom];
		tokenize_input(bpointer, tokens);

		if (tokens[0] != NULL) {
			if (strcmp(tokens[0], "exit") == 0) {
				// Handle the exit built-in command
				handle_exit();
			} else if (strcmp(tokens[0], "env") == 0) {
				// Handle the env built-in command
				print_environment();
			} else {
				char *command_path = get_command_path(tokens[0]);

				if (command_path != NULL) {
					if ((child_pid = fork()) == 0) { // Child process
						// Execute the command with arguments
						if (execve(command_path, tokens, NULL) == -1) {
							// Print error if execution fails
							perror(tokens[0]);
							exit(EXIT_FAILURE);
						}
					} else if (child_pid < 0) { // Forking error
						perror("Fork failed");
					} else { // Parent process
						// Wait for the child process to finish
						waitpid(child_pid, &status, 0);
					}

					free(command_path);
				} else {
					// Command not found in PATH
					fprintf(stderr, "%s: command not found\n", tokens[0]);
				}
			}
		}
	}
}

