#include "shell.h"

/*
 * the exit file prints a message an handles
 * the exit when called.
 * it does not take any parameter.
 *
 *return: 0 as always
*/

void exit_handling(void)

{
	write(STDOUT_FILENO, "bye shell.\n", strlen("bye shell.\n"));
	exit(EXIT_SUCCESS);
} 
