#include "shell.h"
/**
* _printfs - out char
* @stringers: put string
* Return:  integer num
*/
int _printfs(const char *stringers)
{
	return (write(STDOUT_FILENO, stringers, strlen(stringers)));
}
