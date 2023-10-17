#include "shell.h"

/*
*/

int main(int ac, char **av)
{
	size_t p = 0;
	char *bpointer = NULL;
	char *prompt;
	ssize_t c
	(void) ac;
	(void) av;

	while (1)
	{
		prompt = "chisom$ ";
	
		printf("%s", prompt);
		getline(&bpointer, &p, stdin);

				
		if (execve(bpointer, &bpointer, NULL) == -1)
		{	
			perror("Error:");
		}




		return(0);
	}
}

