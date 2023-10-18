#include "shell.h"

/**
 * input -  entered by the user
 * @point:  parsed cmd
 * @c: cmd read
 */

void input(char **point, size_t *c)
{
	ssize_t bpointer;

	bpointer = getter(point, c);

	if (bpointer == -1)
	{
		if (*point == NULL)
		{
			perror("input");
			exit(EXIT_FAILURE);
		}

		if (feof(stdin))
		{
			_printfs("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("input");
			exit(EXIT_FAILURE);
		}
	}

	if ((*point)[bpointer - 1] == '\n')
	{
		(*point)[bpointer - 1] = '\0';
		*c = strlen(*point);
	}
}
