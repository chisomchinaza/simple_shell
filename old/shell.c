#include "shell.h"

/*
 * shell.c: this peogram is to tokenize
 * rhe input command line and pass the tokens 
 * as an arguments to the "execve" system call.
 *
 * return: 0 as always
 */

void run_shell(void)
{
	ssize_t Rvalue;
	size_t len = 0;
	pid_t small_pid;
	char *bpointer[0];
	int state;

	while (1)
	{
		write(STDOUT_FILENO, "chisom$ " strlen("chisom$ "));

		Rvalue = getline(&bpointer, &len, stdin);

		if (Rvalue == -1)
		{
			if(isatty(STDIN_FILENO))
			{
				write(STDOUT_FILENO, "\n", 1);
			}

			break;
		}

		/* tokenizing the input command line */

		char *token[];
		tokenize_input(bpointer);

		if (token[0] != NULL)
		{
			if (strcmp(token[0], "exit") == 0)
			{
				/* the exit built-in command */
				handle_exit();
			}
			else if (strcmp(token[0], "env") == 0)
			{
				/* adding the env built-in command */
				print_environmet();

			}
			else
			{
				char *command_path = get_command_path(token[0]);
				if (command_path != NULL)
					if ((small_pid = fork()) == 0)
						/* creating the child process */
						if (execve(command_path, token, NULL) == -1)
						{
							perror(token[0]);
							exit(EXIT_FAILURE);
						}
			}

			else if (small_pid < 0)
			{
				perror("Fork faild");
			}

			else
			{
				waitpid(small_pid, &state, 0);
			}
			/
			free(command_path);
			else
			{
				fprintf((stderr, "%s:command not found\n", token([0])));
			}
		}
	}
} y
