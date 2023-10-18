#include "shell.h"

/**
* output - commad
*
*/

void output(void)

{
	char curwdir[1024];

	if (getcwd(curwdir, sizeof(curwdir)) == NULL)
	{
		perror("getcwd");
		exit(EXIT_FAILURE);
	}
	_printfs(curwdir);
	_printfs("$ ");
}

