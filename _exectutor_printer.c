#include "shell.h"
/**
 * _exectutor_printer - process
 * @cmdliner: exected
 */
void _executor_printer(const char *cmdliner);
void _exectutor_printer(const char *cmdliner)
{
	char *args_num[128];
	int argsc = 0;
	char *d = " \n\t";
	char *env_menr[] = {NULL};

	pid_t ppids = fork();

	if (ppids == -1)
	{
		perror("fork Error");
		exit(EXIT_FAILURE);
	}
	else if (ppids == 0)
	{
		char *tkeners = strtok((char *)cmdliner, d);

		while (tkeners != NULL)
		{
			args_num[argsc++] = tkeners;
			tkeners = strtok(NULL, d);
		}
		args_num[argsc] = NULL;

		if (strcmp(args_num[0], "clear") == 0)
		{
			if (system("clear") == -1)
			{
				perror("clear");
				exit(EXIT_FAILURE);
			}
			exit(EXIT_SUCCESS);
		}

		if (strchr(args_num[0], '/') != NULL)
		{
			if (execve(args_num[0], args_num, env_menr) == -1)
			{
				perror("execve");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			char *phers = getenv("PATH");
			char *phcopier = strdup(phers);
			char *pouh = strtok(phcopier, ":");

			free(phcopier);
			while (pouh != NULL)
			{
				char full[256];

				snprintf(full, sizeof(full), "%s/%s", pouh, args_num[0]);
				if (execve(full, args_num, env_menr) != -1)
				{
					exit(EXIT_SUCCESS);
				}
				pouh = strtok(NULL, ":\t\n");
			}

			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
